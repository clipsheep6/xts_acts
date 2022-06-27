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

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010039 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010040 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010041 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010042 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010043 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010044 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010045 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010046 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010047 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010048 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010049 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010050 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010051 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010052 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010053 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010054 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010055 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010056 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010057 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010058 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010059 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010060 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010061 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010062 end";
}

static HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo."
        "layout.random.basic_arrays.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010063 end";
}
