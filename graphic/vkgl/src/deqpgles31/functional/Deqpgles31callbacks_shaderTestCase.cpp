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
#include "../ActsDeqpgles310019TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.callbacks.shader.create_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018508 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.callbacks.shader.shader_source",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018509 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_c"
        "overage.callbacks.shader.compile_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018510 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.callbacks.shader.delete_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018511 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.callbacks.shader.shader_binary",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018512 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.callbacks.shader.attach_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018513 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.callbacks.shader.detach_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018514 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.callbacks.shader.link_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018515 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative"
        "_coverage.callbacks.shader.use_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018516 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_c"
        "overage.callbacks.shader.delete_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018517 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_co"
        "verage.callbacks.shader.validate_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018518 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.callbacks.shader.get_program_binary",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018519 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_c"
        "overage.callbacks.shader.program_binary",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018520 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.callbacks.shader.program_parameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018521 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.callbacks.shader.gen_samplers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018522 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.callbacks.shader.bind_sampler",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018523 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_c"
        "overage.callbacks.shader.delete_samplers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018524 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.callbacks.shader.get_sampler_parameteriv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018525 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.callbacks.shader.get_sampler_parameterfv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018526 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.shader.get_sampler_parameterIiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018527 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.shader.get_sampler_parameterIuiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018528 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.callbacks.shader.sampler_parameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018529 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.callbacks.shader.sampler_parameteriv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018530 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.callbacks.shader.sampler_parameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018531 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.callbacks.shader.sampler_parameterfv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018532 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.callbacks.shader.sampler_parameterIiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018533 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.callbacks.shader.sampler_parameterIuiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018534 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.callbacks.shader.get_attrib_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018535 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.callbacks.shader.get_uniform_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018536 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.callbacks.shader.bind_attrib_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018537 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.callbacks.shader.uniform_block_binding",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018538 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.shader.uniformf_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018539 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.shader.uniformf_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018540 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.shader.uniformf_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018541 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.shader.uniformfv_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018542 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.shader.uniformfv_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018543 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.shader.uniformfv_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018544 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.callbacks.shader.uniformfv_invalid_count",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018545 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.shader.uniformi_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018546 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.shader.uniformi_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018547 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.shader.uniformi_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018548 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.shader.uniformiv_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018549 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.shader.uniformiv_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018550 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.shader.uniformiv_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018551 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.callbacks.shader.uniformiv_invalid_count",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018552 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.shader.uniformui_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018553 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.shader.uniformui_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018554 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.shader.uniformui_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018555 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.shader.uniformuiv_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018556 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage"
        ".callbacks.shader.uniformuiv_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018557 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.shader.uniformuiv_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018558 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.shader.uniformuiv_invalid_count",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018559 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.c"
        "allbacks.shader.uniform_matrixfv_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018560 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.ca"
        "llbacks.shader.uniform_matrixfv_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018561 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.c"
        "allbacks.shader.uniform_matrixfv_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018562 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage."
        "callbacks.shader.uniform_matrixfv_invalid_count",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018563 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.callbacks.shader.gen_transform_feedbacks",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018564 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.callbacks.shader.bind_transform_feedback",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018565 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.shader.delete_transform_feedbacks",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018566 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.shader.begin_transform_feedback",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018567 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.shader.pause_transform_feedback",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018568 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.shader.resume_transform_feedback",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018569 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.callbacks.shader.end_transform_feedback",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018570 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage."
        "callbacks.shader.get_transform_feedback_varying",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018571 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.shader.transform_feedback_varyings",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018572 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.callbacks.shader.compile_compute_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018573 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.callbacks.shader.link_compute_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018574 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage"
        ".callbacks.shader.srgb_decode_samplerparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018575 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage"
        ".callbacks.shader.srgb_decode_samplerparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018576 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage."
        "callbacks.shader.srgb_decode_samplerparameteriv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018577 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage."
        "callbacks.shader.srgb_decode_samplerparameterfv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018578 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage."
        "callbacks.shader.srgb_decode_samplerparameterIiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018579 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.c"
        "allbacks.shader.srgb_decode_samplerparameterIuiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018580 end";
}
