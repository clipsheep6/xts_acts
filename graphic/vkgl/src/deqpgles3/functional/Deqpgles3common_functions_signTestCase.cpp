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

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.sign.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012574 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.sign.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012575 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.sign.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012576 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.co"
        "mmon_functions.sign.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012577 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.sign.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012578 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.sign.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012579 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".common_functions.sign.lowp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012580 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.sign.lowp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012581 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.sign.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012582 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.co"
        "mmon_functions.sign.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012583 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.sign.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012584 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.sign.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012585 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".common_functions.sign.lowp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012586 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.sign.lowp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012587 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.sign.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012588 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.co"
        "mmon_functions.sign.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012589 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.sign.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012590 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.sign.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012591 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".common_functions.sign.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012592 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.sign.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012593 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.sign.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012594 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.co"
        "mmon_functions.sign.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012595 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.sign.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012596 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.sign.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012597 end";
}
