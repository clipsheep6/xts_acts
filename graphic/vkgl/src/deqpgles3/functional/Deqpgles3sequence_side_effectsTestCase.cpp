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
#include "../ActsDeqpgles30014TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".sequence.side_effects.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013740 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "sequence.side_effects.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013741 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.s"
        "equence.side_effects.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013742 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.se"
        "quence.side_effects.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013743 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "sequence.side_effects.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013744 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.s"
        "equence.side_effects.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013745 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.se"
        "quence.side_effects.lowp_float_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013746 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.seq"
        "uence.side_effects.lowp_float_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013747 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.sequ"
        "ence.side_effects.mediump_float_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013748 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.seque"
        "nce.side_effects.mediump_float_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013749 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.seq"
        "uence.side_effects.highp_float_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013750 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.sequ"
        "ence.side_effects.highp_float_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013751 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.se"
        "quence.side_effects.lowp_bool_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013752 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.seq"
        "uence.side_effects.lowp_bool_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013753 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.seq"
        "uence.side_effects.mediump_bool_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013754 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.sequ"
        "ence.side_effects.mediump_bool_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013755 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.se"
        "quence.side_effects.highp_bool_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013756 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.seq"
        "uence.side_effects.highp_bool_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013757 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.seque"
        "nce.side_effects.lowp_vec4_ivec4_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013758 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.sequen"
        "ce.side_effects.lowp_vec4_ivec4_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013759 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.sequenc"
        "e.side_effects.mediump_vec4_ivec4_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013760 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.sequence"
        ".side_effects.mediump_vec4_ivec4_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013761 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.sequen"
        "ce.side_effects.highp_vec4_ivec4_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013762 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.sequenc"
        "e.side_effects.highp_vec4_ivec4_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013763 end";
}
