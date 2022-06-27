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
#include "../ActsDeqpgles30034TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.multiple_"
        "attributes.storage.3_user_ptr_user_ptr_buffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033688 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.multiple_"
        "attributes.storage.3_user_ptr_buffer_user_ptr",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033689 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.multiple"
        "_attributes.storage.3_user_ptr_buffer_buffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033690 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.multiple_"
        "attributes.storage.3_buffer_user_ptr_user_ptr",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033691 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.multiple"
        "_attributes.storage.3_buffer_user_ptr_buffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033692 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.multiple"
        "_attributes.storage.3_buffer_buffer_user_ptr",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033693 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.multipl"
        "e_attributes.storage.3_buffer_buffer_buffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033694 end";
}
