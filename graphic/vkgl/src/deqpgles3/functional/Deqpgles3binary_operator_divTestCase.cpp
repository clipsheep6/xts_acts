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
#include "../ActsDeqpgles30009TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008564 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008565 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008566 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008567 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008568 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008569 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.div.lowp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008570 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.lowp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008571 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008572 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008573 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008574 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008575 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.div.lowp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008576 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.lowp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008577 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008578 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008579 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008580 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008581 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.div.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008582 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008583 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008584 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008585 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008586 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008587 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.div.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008588 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008589 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008590 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008591 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008592 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008593 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008594 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008595 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008596 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008597 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008598 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008599 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008600 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008601 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008602 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008603 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.div.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008604 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008605 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008606 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008607 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008608 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008609 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008610 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008611 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.div.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008612 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008613 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008614 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008615 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008616 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008617 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008618 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008619 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008620 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008621 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008622 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008623 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008624 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008625 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008626 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008627 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008628 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008629 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008630 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008631 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008632 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008633 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.div.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008634 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.div.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008635 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008636 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008637 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008638 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.div.mediump_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008639 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008640 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.highp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008641 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008642 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008643 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008644 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.div.mediump_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008645 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008646 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.highp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008647 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008648 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008649 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008650 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.div.mediump_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008651 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008652 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.highp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008653 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008654 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008655 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008656 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008657 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008658 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008659 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008660 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008661 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008662 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008663 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008664 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008665 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008666 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008667 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008668 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008669 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008670 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008671 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008672 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008673 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008674 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.div.mediump_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008675 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008676 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008677 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008678 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.div.mediump_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008679 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008680 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008681 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008682 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.div.mediump_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008683 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008684 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.highp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008685 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008686 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.highp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008687 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008688 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.highp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008689 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_float_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008690 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_float_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008691 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_float_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008692 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.div.mediump_float_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008693 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_float_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008694 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.highp_float_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008695 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_float_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008696 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_float_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008697 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_float_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008698 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.div.mediump_float_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008699 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_float_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008700 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.highp_float_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008701 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008702 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008703 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008704 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.div.mediump_float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008705 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008706 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.highp_float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008707 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008708 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008709 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.mediump_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008710 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008711 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008712 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008713 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.mediump_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008714 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008715 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008716 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008717 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.mediump_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008718 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008719 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.highp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008720 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008721 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.highp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008722 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008723 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.highp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008724 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008725 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008726 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008727 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008728 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.div.mediump_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008729 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008730 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008731 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008732 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.div.mediump_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008733 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.div.lowp_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008734 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.lowp_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008735 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.mediump_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008736 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.div.mediump_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008737 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008738 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.highp_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008739 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008740 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.highp_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008741 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.div.highp_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008742 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.div.highp_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008743 end";
}
