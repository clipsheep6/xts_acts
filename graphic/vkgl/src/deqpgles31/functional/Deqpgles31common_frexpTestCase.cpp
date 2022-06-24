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
#include "../ActsDeqpgles310001TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.frexp.float_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000733 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.float_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000734 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.float_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000735 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.frexp.float_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000736 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.float_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000737 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.float_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000738 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.float_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000739 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.frexp.float_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000740 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.frexp.float_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000741 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.common.frexp.float_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000742 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.frexp.float_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000743 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.float_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000744 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.float_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000745 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.float_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000746 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.float_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000747 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.common.frexp.float_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000748 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.float_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000749 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.float_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000750 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.frexp.vec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000751 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000752 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec2_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000753 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.frexp.vec2_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000754 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec2_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000755 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.frexp.vec2_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000756 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000757 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.vec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000758 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.vec2_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000759 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.common.frexp.vec2_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000760 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.frexp.vec2_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000761 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.vec2_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000762 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.frexp.vec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000763 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000764 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec2_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000765 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.frexp.vec2_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000766 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.vec2_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000767 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec2_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000768 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.frexp.vec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000769 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000770 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec3_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000771 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.frexp.vec3_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000772 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec3_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000773 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.frexp.vec3_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000774 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000775 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.vec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000776 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.vec3_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000777 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.common.frexp.vec3_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000778 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.frexp.vec3_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000779 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.vec3_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000780 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.frexp.vec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000781 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000782 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec3_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000783 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.frexp.vec3_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000784 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.vec3_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000785 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec3_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000786 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.frexp.vec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000787 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000788 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec4_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000789 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.frexp.vec4_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000790 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec4_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000791 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.frexp.vec4_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000792 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000793 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.vec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000794 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.vec4_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000795 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.common.frexp.vec4_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000796 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.frexp.vec4_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000797 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.vec4_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000798 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.frexp.vec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000799 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000800 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec4_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000801 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.frexp.vec4_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000802 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.frexp.vec4_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000803 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.frexp.vec4_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000804 end";
}
