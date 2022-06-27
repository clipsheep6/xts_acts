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

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_dec_branch.1_counter_1_call_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012125 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get"
        "_dec_branch.1_counter_1_call_5000_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012126 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.g"
        "et_dec_branch.1_counter_5_calls_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012127 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_dec_branch.1_counter_5_calls_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012128 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_dec_branch.1_counter_100_calls_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012129 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get"
        "_dec_branch.1_counter_100_calls_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012130 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_dec_branch.4_counters_1_call_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012131 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_dec_branch.4_counters_5_calls_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012132 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get"
        "_dec_branch.4_counters_5_calls_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012133 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get"
        "_dec_branch.4_counters_100_calls_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012134 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get_"
        "dec_branch.4_counters_100_calls_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012135 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_dec_branch.8_counters_1_call_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012136 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.ge"
        "t_dec_branch.8_counters_5_calls_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012137 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get"
        "_dec_branch.8_counters_5_calls_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012138 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get"
        "_dec_branch.8_counters_100_calls_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012139 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.get_"
        "dec_branch.8_counters_100_calls_10_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012140 end";
}
