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
#include "../ActsDeqpgles30041TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040548 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.points.mediump_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040549 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.highp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040550 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040551 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.mediump_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040552 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.highp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040553 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040554 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.mediump_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040555 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.highp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040556 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040557 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.mediump_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040558 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.highp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040559 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040560 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040561 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040562 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040563 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.points.mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040564 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040565 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040566 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.points.mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040567 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040568 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040569 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.points.mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040570 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040571 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040572 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040573 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040574 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040575 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.points.mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040576 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040577 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040578 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.points.mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040579 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040580 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040581 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.points.mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040582 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040583 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040584 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040585 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040586 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.basic_types.separate.points.lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040587 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040588 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040589 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040590 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.points.mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040591 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040592 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040593 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.points.mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040594 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040595 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040596 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.points.mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040597 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040598 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040599 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.mediump_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040600 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.highp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040601 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040602 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.points.mediump_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040603 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.highp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040604 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040605 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.points.mediump_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040606 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.highp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040607 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.basic_types.separate.points.lowp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040608 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.points.mediump_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040609 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.points.highp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040610 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040926 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.points.mediump_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040927 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.highp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040928 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040929 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.mediump_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040930 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.highp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040931 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040932 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.mediump_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040933 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.highp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040934 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040935 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.mediump_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040936 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.highp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040937 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040938 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040939 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040940 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040941 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.points.mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040942 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040943 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040944 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.points.mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040945 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040946 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040947 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.points.mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040948 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040949 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040950 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040951 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040952 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040953 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.points.mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040954 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040955 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040956 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.points.mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040957 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040958 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040959 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.points.mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040960 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040961 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040962 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040963 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040964 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fee"
        "dback.array.separate.points.lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040965 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040966 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040967 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040968 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.points.mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040969 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040970 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040971 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.points.mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040972 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040973 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040974 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.points.mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040975 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040976 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040977 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.mediump_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040978 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.highp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040979 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040980 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.points.mediump_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040981 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.highp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040982 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040983 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.points.mediump_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040984 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.highp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040985 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feed"
        "back.array.separate.points.lowp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040986 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.points.mediump_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040987 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.points.highp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040988 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041304 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.points.mediump_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041305 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.highp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041306 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041307 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.mediump_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041308 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.highp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041309 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041310 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.mediump_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041311 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.highp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041312 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041313 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.mediump_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041314 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.highp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041315 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041316 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041317 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041318 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041319 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.points.mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041320 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041321 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041322 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.points.mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041323 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041324 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041325 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.points.mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041326 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041327 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041328 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041329 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041330 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041331 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.points.mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041332 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041333 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041334 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.points.mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041335 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041336 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041337 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.points.mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041338 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041339 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041340 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041341 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041342 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array_element.separate.points.lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041343 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041344 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041345 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041346 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.points.mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041347 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041348 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041349 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.points.mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041350 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041351 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041352 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.points.mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041353 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041354 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041355 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.mediump_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041356 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.highp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041357 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041358 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.points.mediump_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041359 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.highp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041360 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041361 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.points.mediump_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041362 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.highp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041363 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array_element.separate.points.lowp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041364 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.points.mediump_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041365 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.points.highp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041366 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_"
        "feedback.random.separate.points.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041736 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_"
        "feedback.random.separate.points.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041737 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_"
        "feedback.random.separate.points.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041738 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_"
        "feedback.random.separate.points.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041739 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_"
        "feedback.random.separate.points.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041740 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_"
        "feedback.random.separate.points.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041741 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_"
        "feedback.random.separate.points.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041742 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_"
        "feedback.random.separate.points.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041743 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_"
        "feedback.random.separate.points.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041744 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_f"
        "eedback.random.separate.points.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041745 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.r"
        "andom_full_array_capture.separate.points.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041796 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.r"
        "andom_full_array_capture.separate.points.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041797 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.r"
        "andom_full_array_capture.separate.points.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041798 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.r"
        "andom_full_array_capture.separate.points.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041799 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.r"
        "andom_full_array_capture.separate.points.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041800 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.r"
        "andom_full_array_capture.separate.points.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041801 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.r"
        "andom_full_array_capture.separate.points.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041802 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.r"
        "andom_full_array_capture.separate.points.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041803 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.r"
        "andom_full_array_capture.separate.points.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041804 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.r"
        "andom_full_array_capture.separate.points.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041805 end";
}
