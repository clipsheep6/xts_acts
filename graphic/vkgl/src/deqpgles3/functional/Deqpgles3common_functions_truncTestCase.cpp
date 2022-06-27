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

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.trunc.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012622 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.trunc.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012623 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.co"
        "mmon_functions.trunc.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012624 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.com"
        "mon_functions.trunc.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012625 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.trunc.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012626 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.co"
        "mmon_functions.trunc.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012627 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.trunc.lowp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012628 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.trunc.lowp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012629 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.trunc.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012630 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.co"
        "mmon_functions.trunc.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012631 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.trunc.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012632 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.trunc.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012633 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.trunc.lowp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012634 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.trunc.lowp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012635 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.trunc.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012636 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.co"
        "mmon_functions.trunc.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012637 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.trunc.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012638 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.trunc.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012639 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.trunc.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012640 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.trunc.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012641 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.trunc.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012642 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.co"
        "mmon_functions.trunc.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012643 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "common_functions.trunc.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012644 end";
}

static HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.c"
        "ommon_functions.trunc.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012645 end";
}
