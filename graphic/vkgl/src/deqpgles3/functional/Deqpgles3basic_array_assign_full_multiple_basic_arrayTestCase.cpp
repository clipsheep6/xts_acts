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
#include "../ActsDeqpgles30039TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "asic_array_assign_full.multiple_basic_array.vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038251 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.ba"
        "sic_array_assign_full.multiple_basic_array.fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038252 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "basic_array_assign_full.multiple_basic_array.both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038253 end";
}
