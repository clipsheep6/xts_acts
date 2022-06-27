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

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".geometric.length.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013274 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "geometric.length.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013275 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.geometric.length.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013276 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".geometric.length.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013277 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.geometric.length.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013278 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".geometric.length.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013279 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.geometric.length.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013280 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.geometric.length.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013281 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.geometric.length.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013282 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".geometric.length.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013283 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.geometric.length.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013284 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.geometric.length.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013285 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.geometric.length.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013286 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".geometric.length.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013287 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operat"
        "or.geometric.length.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013288 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.geometric.length.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013289 end";
}
