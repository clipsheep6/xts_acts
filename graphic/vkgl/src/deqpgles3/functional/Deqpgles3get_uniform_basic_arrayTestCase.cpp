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
#include "../ActsDeqpgles30038TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic_array.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037006 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic_array.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037007 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.get_uniform.basic_array.float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037008 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.get_uniform.basic_array.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037009 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic_array.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037010 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic_array.vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037011 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.get_uniform.basic_array.mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037012 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic_array.mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037013 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic_array.mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037014 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.get_uniform.basic_array.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037015 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic_array.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037016 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic_array.int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037017 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic_array.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037018 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic_array.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037019 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.get_uniform.basic_array.ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037020 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.get_uniform.basic_array.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037021 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic_array.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037022 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic_array.uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037023 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic_array.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037024 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic_array.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037025 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.get_uniform.basic_array.uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037026 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initia"
        "l.get_uniform.basic_array.bool_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037027 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial"
        ".get_uniform.basic_array.bool_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037028 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.get_uniform.basic_array.bool_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037029 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.get_uniform.basic_array.bool_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037030 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initia"
        "l.get_uniform.basic_array.bool_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037031 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.get_uniform.basic_array.bool_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037032 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initia"
        "l.get_uniform.basic_array.bool_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037033 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial"
        ".get_uniform.basic_array.bool_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037034 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.get_uniform.basic_array.bool_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037035 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial"
        ".get_uniform.basic_array.bvec4_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037036 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial."
        "get_uniform.basic_array.bvec4_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037037 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initia"
        "l.get_uniform.basic_array.bvec4_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037038 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initia"
        "l.get_uniform.basic_array.bvec4_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037039 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial"
        ".get_uniform.basic_array.bvec4_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037040 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.get_uniform.basic_array.bvec4_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037041 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initia"
        "l.get_uniform.basic_array.bvec4_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037042 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initial"
        ".get_uniform.basic_array.bvec4_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037043 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.get_uniform.basic_array.bvec4_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037044 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.get_uniform.basic_array.sampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037045 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.get_uniform.basic_array.sampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037046 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic_array.sampler2D_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037047 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic_array.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037441 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic_array.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037442 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.get_uniform.basic_array.float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037443 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.get_uniform.basic_array.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037444 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic_array.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037445 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic_array.vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037446 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.get_uniform.basic_array.mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037447 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic_array.mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037448 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic_array.mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037449 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "pointer.get_uniform.basic_array.mat4_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037450 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
        "ointer.get_uniform.basic_array.mat4_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037451 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic_array.mat4_row_major_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037452 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.get_uniform.basic_array.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037453 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic_array.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037454 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic_array.int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037455 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic_array.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037456 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic_array.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037457 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.get_uniform.basic_array.ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037458 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.get_uniform.basic_array.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037459 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic_array.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037460 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic_array.uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037461 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic_array.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037462 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic_array.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037463 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.get_uniform.basic_array.uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037464 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "pointer.get_uniform.basic_array.bool_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037465 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
        "ointer.get_uniform.basic_array.bool_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037466 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic_array.bool_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037467 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic_array.bool_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037468 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "pointer.get_uniform.basic_array.bool_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037469 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic_array.bool_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037470 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "pointer.get_uniform.basic_array.bool_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037471 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
        "ointer.get_uniform.basic_array.bool_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037472 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic_array.bool_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037473 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
        "ointer.get_uniform.basic_array.bvec4_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037474 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
        "inter.get_uniform.basic_array.bvec4_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037475 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "pointer.get_uniform.basic_array.bvec4_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037476 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "pointer.get_uniform.basic_array.bvec4_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037477 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
        "ointer.get_uniform.basic_array.bvec4_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037478 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic_array.bvec4_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037479 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "pointer.get_uniform.basic_array.bvec4_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037480 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
        "ointer.get_uniform.basic_array.bvec4_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037481 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic_array.bvec4_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037482 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic_array.sampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037483 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic_array.sampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037484 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic_array.sampler2D_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037485 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic_array.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037912 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic_array.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037913 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_value.get_uniform.basic_array.float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037914 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_value.get_uniform.basic_array.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037915 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic_array.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037916 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_value.get_uniform.basic_array.vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037917 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_value.get_uniform.basic_array.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037918 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic_array.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037919 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_value.get_uniform.basic_array.int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037920 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic_array.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037921 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic_array.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037922 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_value.get_uniform.basic_array.ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037923 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_value.get_uniform.basic_array.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037924 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic_array.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037925 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_value.get_uniform.basic_array.uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037926 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic_array.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037927 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic_array.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037928 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_value.get_uniform.basic_array.uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037929 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_value.get_uniform.basic_array.bool_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037930 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "value.get_uniform.basic_array.bool_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037931 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.get_uniform.basic_array.bool_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037932 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.get_uniform.basic_array.bool_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037933 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_value.get_uniform.basic_array.bool_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037934 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.get_uniform.basic_array.bool_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037935 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_value.get_uniform.basic_array.bool_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037936 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "value.get_uniform.basic_array.bool_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037937 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.get_uniform.basic_array.bool_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037938 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "value.get_uniform.basic_array.bvec4_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037939 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
        "alue.get_uniform.basic_array.bvec4_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037940 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_value.get_uniform.basic_array.bvec4_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037941 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_value.get_uniform.basic_array.bvec4_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037942 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "value.get_uniform.basic_array.bvec4_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037943 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.get_uniform.basic_array.bvec4_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037944 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_value.get_uniform.basic_array.bvec4_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037945 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "value.get_uniform.basic_array.bvec4_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037946 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.get_uniform.basic_array.bvec4_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037947 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.get_uniform.basic_array.sampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037948 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.get_uniform.basic_array.sampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037949 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic_array.sampler2D_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037950 end";
}
