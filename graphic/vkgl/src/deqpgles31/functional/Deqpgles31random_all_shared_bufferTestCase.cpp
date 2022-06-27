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

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.random.all_shared_buffer.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010289 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.random.all_shared_buffer.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010290 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.random.all_shared_buffer.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010291 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.random.all_shared_buffer.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010292 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.random.all_shared_buffer.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010293 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.random.all_shared_buffer.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010294 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.random.all_shared_buffer.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010295 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.random.all_shared_buffer.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010296 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.random.all_shared_buffer.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010297 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.random.all_shared_buffer.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010298 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010299 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010300 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010301 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010302 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010303 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010304 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010305 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010306 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010307 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010308 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010309 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010310 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010311 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010312 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010313 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010314 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010315 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010316 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010317 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010318 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010319 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010320 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010321 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010322 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010323 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010324 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010325 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010326 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010327 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010328 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010329 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010330 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010331 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010332 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010333 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010334 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010335 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010336 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010337 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.random.all_shared_buffer.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010338 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.all_shared_buffer.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011179 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.all_shared_buffer.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011180 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.all_shared_buffer.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011181 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.all_shared_buffer.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011182 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.all_shared_buffer.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011183 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.all_shared_buffer.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011184 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.all_shared_buffer.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011185 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.all_shared_buffer.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011186 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.all_shared_buffer.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011187 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.all_shared_buffer.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011188 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011189 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011190 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011191 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011192 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011193 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011194 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011195 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011196 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011197 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011198 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011199 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011200 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011201 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011202 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011203 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011204 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011205 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011206 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011207 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011208 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011209 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011210 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011211 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011212 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011213 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011214 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011215 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011216 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011217 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011218 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011219 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011220 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011221 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011222 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011223 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011224 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011225 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011226 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011227 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.all_shared_buffer.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011228 end";
}
