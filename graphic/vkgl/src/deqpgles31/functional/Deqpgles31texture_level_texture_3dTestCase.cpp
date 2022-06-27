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

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.te"
        "xture_level.texture_3d.samples_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015631 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.t"
        "exture_level.texture_3d.samples_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015632 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture_le"
        "vel.texture_3d.fixed_sample_locations_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015633 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture_l"
        "evel.texture_3d.fixed_sample_locations_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015634 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.t"
        "exture_level.texture_3d.width_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015635 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query."
        "texture_level.texture_3d.width_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015636 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.te"
        "xture_level.texture_3d.height_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015637 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.t"
        "exture_level.texture_3d.height_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015638 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.t"
        "exture_level.texture_3d.depth_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015639 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query."
        "texture_level.texture_3d.depth_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015640 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.textur"
        "e_level.texture_3d.internal_format_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015641 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.textu"
        "re_level.texture_3d.internal_format_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015642 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_3d.red_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015643 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.te"
        "xture_level.texture_3d.red_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015644 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_3d.green_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015645 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_3d.green_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015646 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_3d.blue_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015647 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.te"
        "xture_level.texture_3d.blue_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015648 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_3d.alpha_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015649 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_3d.alpha_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015650 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_3d.depth_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015651 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_3d.depth_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015652 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.textu"
        "re_level.texture_3d.stencil_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015653 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_3d.stencil_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015654 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_3d.shared_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015655 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_3d.shared_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015656 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_3d.red_type_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015657 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.te"
        "xture_level.texture_3d.red_type_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015658 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_3d.green_type_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015659 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_3d.green_type_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015660 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_3d.blue_type_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015661 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.te"
        "xture_level.texture_3d.blue_type_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015662 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_3d.alpha_type_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015663 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_3d.alpha_type_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015664 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_3d.depth_type_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015665 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_3d.depth_type_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015666 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_3d.compressed_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015667 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_3d.compressed_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015668 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture_lev"
        "el.texture_3d.buffer_data_store_binding_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015669 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.texture_le"
        "vel.texture_3d.buffer_data_store_binding_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015670 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.textu"
        "re_level.texture_3d.buffer_offset_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015671 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_3d.buffer_offset_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015672 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.text"
        "ure_level.texture_3d.buffer_size_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015673 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.tex"
        "ture_level.texture_3d.buffer_size_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015674 end";
}
