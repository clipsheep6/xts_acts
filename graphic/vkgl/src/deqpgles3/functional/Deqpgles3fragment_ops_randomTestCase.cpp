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

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".fragment_ops.random.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030618 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".fragment_ops.random.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030619 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".fragment_ops.random.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030620 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".fragment_ops.random.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030621 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".fragment_ops.random.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030622 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".fragment_ops.random.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030623 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".fragment_ops.random.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030624 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".fragment_ops.random.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030625 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".fragment_ops.random.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030626 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".fragment_ops.random.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030627 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030628 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030629 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030630 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030631 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030632 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030633 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030634 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030635 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030636 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030637 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030638 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030639 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030640 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030641 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030642 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030643 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030644 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030645 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030646 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030647 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030648 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030649 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030650 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030651 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030652 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030653 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030654 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030655 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030656 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030657 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030658 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030659 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030660 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030661 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030662 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030663 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030664 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030665 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030666 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030667 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.50",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030668 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.51",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030669 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.52",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030670 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.53",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030671 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.54",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030672 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.55",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030673 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.56",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030674 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.57",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030675 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.58",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030676 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.59",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030677 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.60",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030678 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.61",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030679 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.62",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030680 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.63",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030681 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030682 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.65",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030683 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.66",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030684 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.67",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030685 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.68",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030686 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.69",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030687 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.70",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030688 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.71",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030689 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.72",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030690 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.73",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030691 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.74",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030692 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.75",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030693 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.76",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030694 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.77",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030695 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.78",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030696 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.79",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030697 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.80",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030698 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.81",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030699 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.82",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030700 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.83",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030701 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.84",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030702 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.85",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030703 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.86",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030704 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.87",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030705 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.88",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030706 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.89",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030707 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.90",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030708 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.91",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030709 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.92",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030710 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.93",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030711 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.94",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030712 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.95",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030713 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.96",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030714 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.97",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030715 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.98",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030716 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fragment_ops.random.99",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030717 end";
}
