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
#include "../ActsDeqpgles310016TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.te"
        "xture_level.texture_2d.samples_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015587 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.t"
        "exture_level.texture_2d.samples_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015588 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture_le"
        "vel.texture_2d.fixed_sample_locations_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015589 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture_l"
        "evel.texture_2d.fixed_sample_locations_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015590 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.t"
        "exture_level.texture_2d.width_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015591 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query."
        "texture_level.texture_2d.width_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015592 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.te"
        "xture_level.texture_2d.height_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015593 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.t"
        "exture_level.texture_2d.height_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015594 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.t"
        "exture_level.texture_2d.depth_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015595 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query."
        "texture_level.texture_2d.depth_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015596 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.textur"
        "e_level.texture_2d.internal_format_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015597 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.textu"
        "re_level.texture_2d.internal_format_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015598 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_2d.red_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015599 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.te"
        "xture_level.texture_2d.red_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015600 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_2d.green_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015601 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_2d.green_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015602 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_2d.blue_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015603 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.te"
        "xture_level.texture_2d.blue_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015604 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_2d.alpha_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015605 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_2d.alpha_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015606 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_2d.depth_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015607 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_2d.depth_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015608 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.textu"
        "re_level.texture_2d.stencil_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015609 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_2d.stencil_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015610 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_2d.shared_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015611 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_2d.shared_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015612 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_2d.red_type_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015613 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.te"
        "xture_level.texture_2d.red_type_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015614 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_2d.green_type_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015615 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_2d.green_type_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015616 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_2d.blue_type_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015617 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.te"
        "xture_level.texture_2d.blue_type_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015618 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_2d.alpha_type_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015619 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_2d.alpha_type_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015620 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_2d.depth_type_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015621 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_2d.depth_type_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015622 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_2d.compressed_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015623 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_2d.compressed_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015624 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture_lev"
        "el.texture_2d.buffer_data_store_binding_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015625 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture_le"
        "vel.texture_2d.buffer_data_store_binding_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015626 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.textu"
        "re_level.texture_2d.buffer_offset_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015627 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_2d.buffer_offset_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015628 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_2d.buffer_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015629 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_2d.buffer_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015630 end";
}
