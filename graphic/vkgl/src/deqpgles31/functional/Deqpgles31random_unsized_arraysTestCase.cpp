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
#include "../ActsDeqpgles310011TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010064 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010065 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010066 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010067 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010068 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010069 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010070 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010071 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010072 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010073 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010074 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010075 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010076 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010077 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010078 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010079 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010080 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010081 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010082 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010083 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010084 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010085 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010086 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010087 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.unsized_arrays.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010088 end";
}
