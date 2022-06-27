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

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010139 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010140 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010141 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010142 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010143 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010144 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010145 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010146 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010147 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010148 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010149 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010150 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010151 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010152 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010153 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010154 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010155 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010156 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010157 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010158 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010159 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010160 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010161 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010162 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.random.nested_structs.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010163 end";
}
