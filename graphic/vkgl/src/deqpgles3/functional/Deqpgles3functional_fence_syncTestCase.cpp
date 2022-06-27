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
#include "../ActsDeqpgles30042TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fenc"
        "e_sync.wait_sync_smalldraw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041856 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fenc"
        "e_sync.wait_sync_largedraw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041857 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fence_s"
        "ync.client_wait_sync_smalldraw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041858 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fence_s"
        "ync.client_wait_sync_largedraw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041859 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fence_sync."
        "client_wait_sync_timeout_smalldraw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041860 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fence_sync."
        "client_wait_sync_timeout_largedraw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041861 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fence_sy"
        "nc.client_wait_sync_flush_auto",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041862 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fence_syn"
        "c.client_wait_sync_flush_manual",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041863 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fence_"
        "sync.client_wait_sync_noflush",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041864 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fence_"
        "sync.client_wait_sync_finish",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041865 end";
}
