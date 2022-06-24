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

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.layout.fir"
        "st_offset_set.get_dec.8_counters_1_call_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012227 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.layout.first"
        "_offset_set.get_dec.8_counters_1_call_1000_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012228 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.layout.fir"
        "st_offset_set.get_dec.8_counters_5_calls_1_thread",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012229 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.atomic_counter.layout.first"
        "_offset_set.get_dec.8_counters_5_calls_1000_threads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012230 end";
}
