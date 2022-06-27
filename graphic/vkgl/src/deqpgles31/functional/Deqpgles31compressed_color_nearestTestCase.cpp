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

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.textu"
        "re_2d.compressed_color.nearest.s_clamp_to_edge_t_clamp_to_border_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014711 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.textu"
        "re_2d.compressed_color.nearest.s_clamp_to_edge_t_clamp_to_border_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014712 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.t"
        "exture_2d.compressed_color.nearest.s_repeat_t_clamp_to_border_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014713 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
        "xture_2d.compressed_color.nearest.s_repeat_t_clamp_to_border_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014714 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.textur"
        "e_2d.compressed_color.nearest.s_mirrored_repeat_t_clamp_to_border_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014715 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.textur"
        "e_2d.compressed_color.nearest.s_mirrored_repeat_t_clamp_to_border_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014716 end";
}
