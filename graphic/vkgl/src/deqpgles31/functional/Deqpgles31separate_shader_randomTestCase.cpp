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
#include "../ActsDeqpgles310018TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "separate_shader.random.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017710 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "separate_shader.random.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017711 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "separate_shader.random.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017712 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "separate_shader.random.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017713 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "separate_shader.random.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017714 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "separate_shader.random.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017715 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "separate_shader.random.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017716 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "separate_shader.random.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017717 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "separate_shader.random.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017718 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "separate_shader.random.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017719 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017720 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017721 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017722 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017723 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017724 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017725 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017726 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017727 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017728 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017729 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017730 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017731 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017732 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017733 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017734 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017735 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017736 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017737 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017738 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017739 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017740 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017741 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017742 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017743 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017744 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017745 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017746 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017747 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017748 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017749 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017750 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017751 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017752 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017753 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017754 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017755 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017756 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017757 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017758 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017759 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.50",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017760 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.51",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017761 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.52",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017762 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.53",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017763 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.54",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017764 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.55",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017765 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.56",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017766 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.57",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017767 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.58",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017768 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.59",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017769 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.60",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017770 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.61",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017771 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.62",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017772 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.63",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017773 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017774 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.65",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017775 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.66",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017776 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.67",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017777 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.68",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017778 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.69",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017779 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.70",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017780 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.71",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017781 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.72",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017782 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.73",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017783 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.74",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017784 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.75",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017785 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.76",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017786 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.77",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017787 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.78",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017788 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.79",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017789 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.80",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017790 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.81",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017791 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.82",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017792 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.83",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017793 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.84",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017794 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.85",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017795 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.86",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017796 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.87",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017797 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.88",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017798 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.89",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017799 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.90",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017800 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.91",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017801 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.92",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017802 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.93",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017803 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.94",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017804 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.95",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017805 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.96",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017806 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.97",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017807 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.98",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017808 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.99",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017809 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.100",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017810 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.101",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017811 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.102",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017812 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.103",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017813 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.104",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017814 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.105",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017815 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.106",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017816 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.107",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017817 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.108",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017818 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.109",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017819 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.110",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017820 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.111",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017821 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.112",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017822 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.113",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017823 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.114",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017824 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.115",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017825 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.116",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017826 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.117",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017827 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.118",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017828 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.119",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017829 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.120",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017830 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.121",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017831 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.122",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017832 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.123",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017833 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.124",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017834 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.125",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017835 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.126",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017836 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "eparate_shader.random.127",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017837 end";
}
