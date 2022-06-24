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

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.mod.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008744 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008745 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008746 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008747 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008748 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008749 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008750 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008751 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008752 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008753 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008754 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008755 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008756 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008757 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008758 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008759 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.mod.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008760 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008761 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008762 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008763 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008764 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008765 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008766 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008767 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.mod.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008768 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008769 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008770 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008771 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008772 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008773 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008774 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008775 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008776 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008777 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008778 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008779 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008780 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008781 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008782 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008783 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008784 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008785 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008786 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008787 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008788 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008789 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mod.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008790 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mod.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008791 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008792 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008793 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008794 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008795 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008796 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008797 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008798 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008799 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008800 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008801 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008802 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008803 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008804 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008805 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008806 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008807 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008808 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008809 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.lowp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008810 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.lowp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008811 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.mediump_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008812 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mod.mediump_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008813 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.lowp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008814 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.lowp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008815 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.mediump_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008816 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mod.mediump_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008817 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.lowp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008818 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.lowp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008819 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.mediump_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008820 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mod.mediump_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008821 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.highp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008822 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.highp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008823 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.highp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008824 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.highp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008825 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.highp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008826 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.highp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008827 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.lowp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008828 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.lowp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008829 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.mediump_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008830 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.mediump_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008831 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.lowp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008832 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.lowp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008833 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.mediump_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008834 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.mediump_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008835 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.lowp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008836 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.lowp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008837 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.mediump_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008838 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.mediump_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008839 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.highp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008840 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.highp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008841 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.highp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008842 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.highp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008843 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.highp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008844 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.highp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008845 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.lowp_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008846 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.lowp_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008847 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.mediump_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008848 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mod.mediump_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008849 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.lowp_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008850 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.lowp_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008851 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.mediump_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008852 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mod.mediump_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008853 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mod.lowp_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008854 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.lowp_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008855 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.mediump_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008856 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mod.mediump_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008857 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.highp_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008858 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.highp_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008859 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.highp_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008860 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.highp_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008861 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mod.highp_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008862 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mod.highp_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008863 end";
}
