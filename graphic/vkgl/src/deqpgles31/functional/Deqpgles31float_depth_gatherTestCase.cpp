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
#include "../ActsDeqpgles310015TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
        "xture_2d.float_depth.gather.s_clamp_to_edge_t_clamp_to_border_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014693 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
        "xture_2d.float_depth.gather.s_clamp_to_edge_t_clamp_to_border_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014694 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mod"
        "e.texture_2d.float_depth.gather.s_repeat_t_clamp_to_border_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014695 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode"
        ".texture_2d.float_depth.gather.s_repeat_t_clamp_to_border_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014696 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
        "ture_2d.float_depth.gather.s_mirrored_repeat_t_clamp_to_border_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014697 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
        "ture_2d.float_depth.gather.s_mirrored_repeat_t_clamp_to_border_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014698 end";
}
