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
#include "../ActsDeqpgles30012TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.lowp_int_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011576 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_int_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011577 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.mediump_int_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011578 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_int_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011579 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_ivec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011580 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.lowp_ivec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011581 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_ivec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011582 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operator"
        ".left_shift_assign_result.mediump_ivec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011583 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_ivec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011584 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.lowp_ivec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011585 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_ivec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011586 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operator"
        ".left_shift_assign_result.mediump_ivec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011587 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_ivec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011588 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.lowp_ivec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011589 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_ivec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011590 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operator"
        ".left_shift_assign_result.mediump_ivec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011591 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.highp_int_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011592 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_int_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011593 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_ivec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011594 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.highp_ivec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011595 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_ivec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011596 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.highp_ivec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011597 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_ivec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011598 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.highp_ivec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011599 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_result.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011600 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011601 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011602 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011603 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_result.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011604 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011605 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011606 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011607 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_result.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011608 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011609 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011610 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011611 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_result.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011612 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011613 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011614 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011615 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_result.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011616 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011617 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011618 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011619 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011620 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011621 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011622 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011623 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_ivec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011624 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.lowp_ivec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011625 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_ivec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011626 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_ivec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011627 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_ivec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011628 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.lowp_ivec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011629 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_ivec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011630 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_ivec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011631 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_ivec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011632 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.lowp_ivec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011633 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_ivec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011634 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_ivec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011635 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_ivec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011636 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_ivec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011637 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_ivec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011638 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_ivec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011639 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_ivec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011640 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_ivec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011641 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011642 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.lowp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011643 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011644 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011645 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011646 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.lowp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011647 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011648 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011649 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011650 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.lowp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011651 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011652 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011653 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011654 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011655 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011656 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011657 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011658 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011659 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.left_shift_assign_result.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011660 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_result.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011661 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011662 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011663 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_result.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011664 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011665 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011666 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011667 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_result.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011668 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011669 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011670 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011671 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_result.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011672 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011673 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011674 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011675 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_result.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011676 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011677 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011678 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011679 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011680 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011681 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_result.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011682 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011683 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.lowp_uint_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011684 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_uint_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011685 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.mediump_uint_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011686 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_uint_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011687 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_uvec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011688 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.lowp_uvec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011689 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_uvec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011690 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operator"
        ".left_shift_assign_result.mediump_uvec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011691 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_uvec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011692 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.lowp_uvec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011693 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_uvec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011694 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operator"
        ".left_shift_assign_result.mediump_uvec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011695 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_uvec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011696 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.lowp_uvec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011697 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_uvec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011698 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operator"
        ".left_shift_assign_result.mediump_uvec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011699 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.highp_uint_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011700 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_uint_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011701 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_uvec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011702 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.highp_uvec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011703 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_uvec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011704 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.highp_uvec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011705 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_uvec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011706 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.highp_uvec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011707 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011708 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011709 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011710 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011711 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011712 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011713 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011714 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011715 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011716 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011717 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011718 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011719 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011720 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011721 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011722 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011723 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011724 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011725 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.lowp_uvec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011726 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_uvec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011727 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_uvec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011728 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_uvec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011729 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.lowp_uvec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011730 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_uvec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011731 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_uvec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011732 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_uvec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011733 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_result.lowp_uvec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011734 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.lowp_uvec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011735 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.mediump_uvec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011736 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_result.mediump_uvec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011737 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_uvec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011738 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_uvec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011739 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_uvec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011740 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_uvec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011741 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_result.highp_uvec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011742 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_result.highp_uvec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011743 end";
}
