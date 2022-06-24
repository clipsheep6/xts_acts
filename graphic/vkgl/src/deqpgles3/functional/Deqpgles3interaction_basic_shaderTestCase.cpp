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
#include "../ActsDeqpgles30031TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_ops.interaction.basic_shader.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030718 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_ops.interaction.basic_shader.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030719 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_ops.interaction.basic_shader.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030720 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_ops.interaction.basic_shader.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030721 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_ops.interaction.basic_shader.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030722 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_ops.interaction.basic_shader.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030723 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_ops.interaction.basic_shader.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030724 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_ops.interaction.basic_shader.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030725 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_ops.interaction.basic_shader.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030726 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030727 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030728 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030729 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030730 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030731 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030732 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030733 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030734 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030735 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030736 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030737 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030738 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030739 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030740 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030741 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030742 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030743 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030744 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030745 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030746 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030747 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030748 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030749 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030750 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030751 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030752 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030753 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030754 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030755 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030756 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030757 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030758 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030759 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030760 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030761 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030762 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030763 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030764 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030765 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.50",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030766 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.51",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030767 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.52",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030768 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.53",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030769 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.54",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030770 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.55",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030771 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.56",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030772 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.57",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030773 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.58",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030774 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.59",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030775 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.60",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030776 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.61",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030777 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.62",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030778 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.63",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030779 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030780 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.65",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030781 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.66",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030782 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.67",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030783 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.68",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030784 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.69",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030785 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.70",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030786 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.71",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030787 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.72",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030788 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.73",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030789 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.74",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030790 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.75",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030791 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.76",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030792 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.77",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030793 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.78",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030794 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.79",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030795 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.80",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030796 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.81",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030797 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.82",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030798 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.83",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030799 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.84",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030800 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.85",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030801 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.86",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030802 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.87",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030803 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.88",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030804 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.89",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030805 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.90",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030806 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.91",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030807 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.92",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030808 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.93",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030809 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.94",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030810 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.95",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030811 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.96",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030812 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.97",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030813 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.98",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030814 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "ops.interaction.basic_shader.99",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030815 end";
}
