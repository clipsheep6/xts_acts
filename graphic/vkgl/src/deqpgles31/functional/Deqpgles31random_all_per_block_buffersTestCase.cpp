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

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.random.all_per_block_buffers.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010239 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.random.all_per_block_buffers.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010240 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.random.all_per_block_buffers.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010241 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.random.all_per_block_buffers.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010242 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.random.all_per_block_buffers.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010243 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.random.all_per_block_buffers.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010244 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.random.all_per_block_buffers.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010245 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.random.all_per_block_buffers.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010246 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.random.all_per_block_buffers.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010247 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.random.all_per_block_buffers.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010248 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010249 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010250 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010251 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010252 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010253 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010254 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010255 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010256 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010257 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010258 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010259 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010260 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010261 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010262 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010263 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010264 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010265 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010266 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010267 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010268 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010269 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010270 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010271 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010272 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010273 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010274 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010275 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010276 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010277 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010278 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010279 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010280 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010281 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010282 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010283 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010284 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010285 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010286 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010287 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.random.all_per_block_buffers.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010288 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.r"
        "andom.all_per_block_buffers.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011130 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.r"
        "andom.all_per_block_buffers.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011131 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.r"
        "andom.all_per_block_buffers.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011132 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.r"
        "andom.all_per_block_buffers.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011133 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.r"
        "andom.all_per_block_buffers.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011134 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.r"
        "andom.all_per_block_buffers.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011135 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.r"
        "andom.all_per_block_buffers.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011136 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.r"
        "andom.all_per_block_buffers.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011137 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.r"
        "andom.all_per_block_buffers.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011138 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.r"
        "andom.all_per_block_buffers.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011139 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011140 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011141 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011142 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011143 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011144 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011145 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011146 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011147 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011148 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011149 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011150 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011151 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011152 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011153 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011154 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011155 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011156 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011157 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011158 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011159 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011160 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011161 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011162 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011163 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011164 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011165 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011166 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011167 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011168 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011169 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011170 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011171 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011172 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011173 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011174 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011175 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011176 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011177 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.ra"
        "ndom.all_per_block_buffers.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011178 end";
}
