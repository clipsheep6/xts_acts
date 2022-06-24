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

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.t"
        "exture_2d.int_color.nearest.s_clamp_to_edge_t_clamp_to_border_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014651 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
        "xture_2d.int_color.nearest.s_clamp_to_edge_t_clamp_to_border_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014652 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mod"
        "e.texture_2d.int_color.nearest.s_repeat_t_clamp_to_border_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014653 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mod"
        "e.texture_2d.int_color.nearest.s_repeat_t_clamp_to_border_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014654 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.te"
        "xture_2d.int_color.nearest.s_mirrored_repeat_t_clamp_to_border_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014655 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.tex"
        "ture_2d.int_color.nearest.s_mirrored_repeat_t_clamp_to_border_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014656 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d."
        "int_color.nearest.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014769 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture_3d.i"
        "nt_color.nearest.s_clamp_to_border_t_clamp_to_border_r_clamp_to_border_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014770 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
        "_3d.int_color.nearest.s_clamp_to_border_t_clamp_to_border_r_repeat_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014771 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
        "_3d.int_color.nearest.s_clamp_to_border_t_clamp_to_border_r_repeat_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014772 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
        "_3d.int_color.nearest.s_mirrored_repeat_t_clamp_to_border_r_repeat_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014773 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
        "_3d.int_color.nearest.s_mirrored_repeat_t_clamp_to_border_r_repeat_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014774 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
        "_3d.int_color.nearest.s_repeat_t_mirrored_repeat_r_clamp_to_border_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014775 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_clamp.per_axis_wrap_mode.texture"
        "_3d.int_color.nearest.s_repeat_t_mirrored_repeat_r_clamp_to_border_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014776 end";
}
