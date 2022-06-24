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
#include "../ActsDeqpgles30010TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_xor.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009104 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009105 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009106 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009107 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009108 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009109 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009110 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009111 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009112 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009113, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009113 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009113 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009113 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009114, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009114 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009114 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009114 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009115, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009115 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009115 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009115 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009116, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009116 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009116 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009116 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009117, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009117 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009117 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009117 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009118, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009118 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009118 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009118 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009119, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009119 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009119 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009119 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009120, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009120 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_xor.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009120 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009120 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009121, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009121 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009121 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009121 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009122, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009122 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009122 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009122 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009123, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009123 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009123 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009123 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009124, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009124 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009124 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009124 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009125 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009126 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009127 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_xor.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009128 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009129 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009130 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009131 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009132 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009133 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009134 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009135 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009136 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009137 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009138 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009139 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009140 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009141 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009142 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009143 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009144 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009145 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009146 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009147 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009148 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009149 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_xor.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009150 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_xor.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009151 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009152 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009153 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009154 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009155 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009156 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009157 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009158 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009159 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009160 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009161 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009162 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009163 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009164 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009165 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009166 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009167 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009168 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009169 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.lowp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009170 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.lowp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009171 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.mediump_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009172 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.bitwise_xor.mediump_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009173 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.lowp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009174 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.lowp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009175 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.mediump_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009176 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.bitwise_xor.mediump_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009177 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.lowp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009178 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.lowp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009179 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.mediump_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009180 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.bitwise_xor.mediump_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009181 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.highp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009182 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.highp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009183 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.highp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009184 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.highp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009185 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.highp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009186 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.highp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009187 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.lowp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009188 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.lowp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009189 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.mediump_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009190 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.mediump_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009191 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.lowp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009192 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.lowp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009193 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.mediump_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009194 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.mediump_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009195 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.lowp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009196 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.lowp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009197 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.mediump_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009198 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.mediump_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009199 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.highp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009200 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.highp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009201 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.highp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009202 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.highp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009203 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.highp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009204 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.highp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009205 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.lowp_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009206 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.lowp_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009207 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.mediump_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009208 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.bitwise_xor.mediump_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009209 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.lowp_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009210 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.lowp_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009211 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.mediump_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009212 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.bitwise_xor.mediump_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009213 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_xor.lowp_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009214 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.lowp_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009215 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.mediump_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009216 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.bitwise_xor.mediump_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009217 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.highp_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009218 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.highp_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009219 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.highp_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009220 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.highp_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009221 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_xor.highp_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009222 end";
}

static HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_xor.highp_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009223 end";
}
