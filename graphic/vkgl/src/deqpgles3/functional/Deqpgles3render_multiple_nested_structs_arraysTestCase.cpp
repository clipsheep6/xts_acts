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
#include "../ActsDeqpgles30038TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initia"
        "l.render.multiple_nested_structs_arrays.vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037306 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial"
        ".render.multiple_nested_structs_arrays.fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037307 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.render.multiple_nested_structs_arrays.both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037308 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "pointer.render.multiple_nested_structs_arrays.vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037831 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
        "ointer.render.multiple_nested_structs_arrays.fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037832 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.render.multiple_nested_structs_arrays.both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037833 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_value.render.multiple_nested_structs_arrays.vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038200 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "value.render.multiple_nested_structs_arrays.fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038201 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.render.multiple_nested_structs_arrays.both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038202 end";
}
