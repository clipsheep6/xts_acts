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
#include "../ActsDeqpgles30013TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.exponential.pow.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012438 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".exponential.pow.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012439 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.exponential.pow.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012440 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.exponential.pow.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012441 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.exponential.pow.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012442 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".exponential.pow.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012443 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.exponential.pow.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012444 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.exponential.pow.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012445 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.exponential.pow.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012446 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".exponential.pow.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012447 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.exponential.pow.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012448 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.exponential.pow.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012449 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.exponential.pow.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012450 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".exponential.pow.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012451 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.exponential.pow.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012452 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.exponential.pow.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012453 end";
}
