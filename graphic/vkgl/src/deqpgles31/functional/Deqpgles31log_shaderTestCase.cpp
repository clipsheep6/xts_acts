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
#include "../ActsDeqpgles310020TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negati"
        "ve_coverage.log.shader.create_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019006 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negati"
        "ve_coverage.log.shader.shader_source",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019007 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negativ"
        "e_coverage.log.shader.compile_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019008 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negati"
        "ve_coverage.log.shader.delete_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019009 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negati"
        "ve_coverage.log.shader.shader_binary",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019010 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negati"
        "ve_coverage.log.shader.attach_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019011 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negati"
        "ve_coverage.log.shader.detach_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019012 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negati"
        "ve_coverage.log.shader.link_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019013 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negat"
        "ive_coverage.log.shader.use_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019014 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negativ"
        "e_coverage.log.shader.delete_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019015 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative"
        "_coverage.log.shader.validate_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019016 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.log.shader.get_program_binary",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019017 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negativ"
        "e_coverage.log.shader.program_binary",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019018 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.log.shader.program_parameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019019 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negati"
        "ve_coverage.log.shader.gen_samplers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019020 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negati"
        "ve_coverage.log.shader.bind_sampler",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019021 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negativ"
        "e_coverage.log.shader.delete_samplers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019022 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_co"
        "verage.log.shader.get_sampler_parameteriv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019023 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_co"
        "verage.log.shader.get_sampler_parameterfv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019024 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader.get_sampler_parameterIiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019025 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader.get_sampler_parameterIuiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019026 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.log.shader.sampler_parameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019027 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.log.shader.sampler_parameteriv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019028 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.log.shader.sampler_parameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019029 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.log.shader.sampler_parameterfv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019030 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_c"
        "overage.log.shader.sampler_parameterIiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019031 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_c"
        "overage.log.shader.sampler_parameterIuiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019032 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.log.shader.get_attrib_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019033 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_c"
        "overage.log.shader.get_uniform_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019034 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_c"
        "overage.log.shader.bind_attrib_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019035 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_c"
        "overage.log.shader.uniform_block_binding",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019036 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader.uniformf_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019037 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader.uniformf_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019038 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader.uniformf_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019039 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader.uniformfv_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019040 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader.uniformfv_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019041 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader.uniformfv_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019042 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_co"
        "verage.log.shader.uniformfv_invalid_count",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019043 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader.uniformi_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019044 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader.uniformi_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019045 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader.uniformi_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019046 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader.uniformiv_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019047 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader.uniformiv_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019048 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader.uniformiv_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019049 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_co"
        "verage.log.shader.uniformiv_invalid_count",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019050 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader.uniformui_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019051 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader.uniformui_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019052 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader.uniformui_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019053 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader.uniformuiv_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019054 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.log.shader.uniformuiv_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019055 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader.uniformuiv_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019056 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader.uniformuiv_invalid_count",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019057 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.log.shader.uniform_matrixfv_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019058 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage"
        ".log.shader.uniform_matrixfv_incompatible_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019059 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.log.shader.uniform_matrixfv_invalid_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019060 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.log.shader.uniform_matrixfv_invalid_count",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019061 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_co"
        "verage.log.shader.gen_transform_feedbacks",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019062 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_co"
        "verage.log.shader.bind_transform_feedback",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019063 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader.delete_transform_feedbacks",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019064 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader.begin_transform_feedback",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019065 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader.pause_transform_feedback",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019066 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader.resume_transform_feedback",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019067 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_co"
        "verage.log.shader.end_transform_feedback",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019068 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.log.shader.get_transform_feedback_varying",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019069 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader.transform_feedback_varyings",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019070 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_co"
        "verage.log.shader.compile_compute_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019071 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.log.shader.link_compute_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019072 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.log.shader.srgb_decode_samplerparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019073 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.log.shader.srgb_decode_samplerparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019074 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.log.shader.srgb_decode_samplerparameteriv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019075 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.log.shader.srgb_decode_samplerparameterfv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019076 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.log.shader.srgb_decode_samplerparameterIiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019077 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.log.shader.srgb_decode_samplerparameterIuiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019078 end";
}
