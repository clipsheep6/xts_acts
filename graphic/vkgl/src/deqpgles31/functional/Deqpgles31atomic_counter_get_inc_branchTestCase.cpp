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
#include "../ActsDeqpgles310013TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_inc_branch.1_counter_1_call_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012090 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get"
        "_inc_branch.1_counter_1_call_5000_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012091 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.g"
        "et_inc_branch.1_counter_5_calls_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012092 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_inc_branch.1_counter_5_calls_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012093 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_inc_branch.1_counter_100_calls_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012094 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get"
        "_inc_branch.1_counter_100_calls_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012095 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_inc_branch.4_counters_1_call_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012096 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012097, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012097 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_inc_branch.4_counters_5_calls_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012097 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012097 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get"
        "_inc_branch.4_counters_5_calls_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012098 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012099, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012099 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get"
        "_inc_branch.4_counters_100_calls_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012099 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012099 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012100, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012100 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get_"
        "inc_branch.4_counters_100_calls_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012100 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012100 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_inc_branch.8_counters_1_call_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012101 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_inc_branch.8_counters_5_calls_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012102 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get"
        "_inc_branch.8_counters_5_calls_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012103 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get"
        "_inc_branch.8_counters_100_calls_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012104 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get_"
        "inc_branch.8_counters_100_calls_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012105 end";
}
