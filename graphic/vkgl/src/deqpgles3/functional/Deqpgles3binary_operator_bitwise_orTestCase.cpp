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

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.bitwise_or.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008984 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_or.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008985 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008986 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008987 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_or.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008988 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008989 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008990 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008991 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_or.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008992 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008993 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008994 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008995 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_or.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008996 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008997 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008998 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008999 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_or.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009000 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009001 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009002 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009003 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009004 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009005 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009006 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009007 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_or.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009008 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009009 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009010 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009011 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_or.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009012 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009013 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009014 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009015 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_or.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009016 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009017 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009018 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009019 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_or.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009020 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009021 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009022 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009023 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_or.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009024 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009025 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009026 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009027 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009028 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009029 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_or.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009030 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009031 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009032 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009033 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009034 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_or.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009035 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009036 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009037 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009038 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_or.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009039 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009040 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009041 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009042 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_or.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009043 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009044 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009045 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009046 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009047 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009048 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009049 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.lowp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009050 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.lowp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009051 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.mediump_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009052 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_or.mediump_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009053 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.lowp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009054 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.lowp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009055 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.mediump_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009056 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_or.mediump_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009057 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.lowp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009058 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.lowp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009059 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.mediump_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009060 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_or.mediump_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009061 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.highp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009062 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.highp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009063 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.highp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009064 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.highp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009065 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.highp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009066 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.highp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009067 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.lowp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009068 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.lowp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009069 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.mediump_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009070 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_or.mediump_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009071 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.lowp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009072 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.lowp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009073 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.mediump_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009074 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_or.mediump_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009075 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_or.lowp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009076 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.lowp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009077 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.mediump_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009078 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_or.mediump_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009079 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.highp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009080 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.highp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009081 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.highp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009082 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.highp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009083 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.highp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009084 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.highp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009085 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.lowp_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009086 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.lowp_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009087 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.mediump_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009088 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_or.mediump_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009089 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.lowp_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009090 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.lowp_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009091 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.mediump_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009092 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_or.mediump_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009093 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.lowp_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009094 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.lowp_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009095 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.mediump_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009096 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009097, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009097 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_or.mediump_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009097 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009097 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.highp_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009098 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009099, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009099 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.highp_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009099 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009099 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009100, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009100 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.highp_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009100 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009100 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.highp_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009101 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_or.highp_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009102 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_or.highp_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009103 end";
}
