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
#include "../ActsDeqpgles30014TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.geometric.dot.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013306 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.geometric.dot.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013307 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.opera"
        "tor.geometric.dot.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013308 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.geometric.dot.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013309 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.geometric.dot.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013310 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.geometric.dot.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013311 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.opera"
        "tor.geometric.dot.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013312 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.geometric.dot.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013313 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.geometric.dot.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013314 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.geometric.dot.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013315 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.opera"
        "tor.geometric.dot.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013316 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.geometric.dot.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013317 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.geometric.dot.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013318 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.geometric.dot.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013319 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.opera"
        "tor.geometric.dot.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013320 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.geometric.dot.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013321 end";
}
