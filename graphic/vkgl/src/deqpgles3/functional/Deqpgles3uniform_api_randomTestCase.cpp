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

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038323 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038324 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038325 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038326 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038327 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038328 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038329 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038330 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038331 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038332 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038333 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038334 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038335 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038336 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038337 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038338 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038339 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038340 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038341 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038342 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038343 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038344 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038345 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038346 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038347 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038348 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038349 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038350 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038351 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038352 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038353 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038354 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038355 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038356 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038357 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038358 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038359 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038360 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038361 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038362 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038363 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038364 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038365 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038366 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038367 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038368 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038369 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038370 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038371 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.50",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038372 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.51",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038373 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.52",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038374 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.53",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038375 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.54",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038376 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.55",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038377 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.56",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038378 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.57",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038379 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.58",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038380 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.59",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038381 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.60",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038382 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.61",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038383 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.62",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038384 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.63",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038385 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038386 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.65",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038387 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.66",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038388 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.67",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038389 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.68",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038390 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.69",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038391 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.70",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038392 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.71",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038393 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.72",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038394 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.73",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038395 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.74",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038396 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.75",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038397 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.76",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038398 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.77",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038399 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.78",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038400 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.79",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038401 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.80",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038402 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.81",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038403 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.82",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038404 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.83",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038405 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.84",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038406 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.85",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038407 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.86",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038408 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.87",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038409 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.88",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038410 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.89",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038411 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.90",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038412 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.91",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038413 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.92",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038414 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.93",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038415 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.94",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038416 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.95",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038417 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.96",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038418 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.97",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038419 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.98",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038420 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".uniform_api.random.99",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038421 end";
}
