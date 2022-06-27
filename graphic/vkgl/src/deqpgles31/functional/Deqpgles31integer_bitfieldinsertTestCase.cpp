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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310002TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.bitfieldinsert.int_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001377 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.int_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001378 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.int_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001379 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.int_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001380 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.int_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001381 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.int_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001382 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.int_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001383 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.int_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001384 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.int_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001385 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions"
        ".integer.bitfieldinsert.int_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001386 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.int_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001387 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.int_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001388 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.int_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001389 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.int_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001390 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.int_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001391 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.int_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001392 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.int_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001393 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.int_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001394 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.ivec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001395 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001396 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec2_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001397 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.ivec2_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001398 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec2_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001399 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec2_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001400 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001401 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.ivec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001402 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.ivec2_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001403 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions."
        "integer.bitfieldinsert.ivec2_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001404 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.ivec2_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001405 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec2_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001406 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001407 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001408 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec2_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001409 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions"
        ".integer.bitfieldinsert.ivec2_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001410 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec2_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001411 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec2_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001412 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.ivec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001413 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001414 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec3_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001415 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.ivec3_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001416 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec3_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001417 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec3_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001418 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001419 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.ivec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001420 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.ivec3_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001421 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions."
        "integer.bitfieldinsert.ivec3_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001422 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.ivec3_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001423 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec3_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001424 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001425 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001426 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec3_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001427 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions"
        ".integer.bitfieldinsert.ivec3_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001428 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec3_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001429 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec3_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001430 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.ivec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001431 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001432 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec4_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001433 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.ivec4_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001434 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec4_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001435 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec4_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001436 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001437 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.ivec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001438 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.ivec4_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001439 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions."
        "integer.bitfieldinsert.ivec4_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001440 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.ivec4_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001441 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec4_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001442 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001443 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001444 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec4_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001445 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions"
        ".integer.bitfieldinsert.ivec4_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001446 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.ivec4_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001447 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.ivec4_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001448 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.uint_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001449 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uint_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001450 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uint_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001451 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uint_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001452 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uint_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001453 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.uint_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001454 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uint_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001455 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uint_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001456 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uint_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001457 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions"
        ".integer.bitfieldinsert.uint_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001458 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uint_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001459 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uint_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001460 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.uint_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001461 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uint_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001462 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uint_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001463 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uint_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001464 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uint_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001465 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uint_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001466 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.uvec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001467 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001468 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec2_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001469 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uvec2_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001470 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec2_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001471 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec2_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001472 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001473 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uvec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001474 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uvec2_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001475 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions."
        "integer.bitfieldinsert.uvec2_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001476 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uvec2_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001477 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec2_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001478 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001479 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001480 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec2_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001481 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions"
        ".integer.bitfieldinsert.uvec2_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001482 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec2_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001483 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec2_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001484 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.uvec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001485 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001486 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec3_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001487 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uvec3_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001488 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec3_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001489 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec3_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001490 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001491 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uvec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001492 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uvec3_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001493 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions."
        "integer.bitfieldinsert.uvec3_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001494 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uvec3_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001495 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec3_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001496 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001497 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001498 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec3_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001499 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions"
        ".integer.bitfieldinsert.uvec3_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001500 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec3_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001501 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec3_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001502 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.bitfieldinsert.uvec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001503 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001504 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec4_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001505 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uvec4_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001506 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec4_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001507 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec4_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001508 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001509 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uvec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001510 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uvec4_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001511 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions."
        "integer.bitfieldinsert.uvec4_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001512 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.bitfieldinsert.uvec4_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001513 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec4_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001514 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001515 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001516 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec4_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001517 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions"
        ".integer.bitfieldinsert.uvec4_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001518 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.bitfieldinsert.uvec4_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001519 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.bitfieldinsert.uvec4_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001520 end";
}
