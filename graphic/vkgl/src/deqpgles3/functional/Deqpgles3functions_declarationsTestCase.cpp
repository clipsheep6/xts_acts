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
#include "../ActsDeqpgles30005TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.fu"
        "nctions.declarations.basic_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004153 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.fun"
        "ctions.declarations.basic_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004154 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.func"
        "tions.declarations.basic_arg_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004155 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.funct"
        "ions.declarations.basic_arg_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004156 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.function"
        "s.declarations.define_after_use_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004157 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.functions"
        ".declarations.define_after_use_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004158 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.functio"
        "ns.declarations.double_declare_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004159 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.function"
        "s.declarations.double_declare_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004160 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.functions."
        "declarations.declare_after_define_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004161 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.functions.d"
        "eclarations.declare_after_define_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004162 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.functio"
        "ns.declarations.void_vs_no_void_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004163 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.function"
        "s.declarations.void_vs_no_void_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004164 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.funct"
        "ions.declarations.in_vs_no_in_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004165 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.functi"
        "ons.declarations.in_vs_no_in_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004166 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.functions.decl"
        "arations.default_vs_explicit_precision_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004167 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.functions.decla"
        "rations.default_vs_explicit_precision_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004168 end";
}
