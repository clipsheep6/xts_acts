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
#include "../ActsDeqpgles30037TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036901 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036902 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036903 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036904 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036905 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.val"
        "ue.initial.get_uniform.basic.vec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036906 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036907 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036908 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.val"
        "ue.initial.get_uniform.basic.vec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036909 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036910 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036911 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.val"
        "ue.initial.get_uniform.basic.vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036912 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036913 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036914 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.val"
        "ue.initial.get_uniform.basic.mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036915 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036916 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036917 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036918 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036919 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036920 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036921 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036922 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036923 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036924 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036925 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036926 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.val"
        "ue.initial.get_uniform.basic.mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036927 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036928 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036929 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036930 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036931 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036932 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036933 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036934 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036935 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036936 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036937 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036938 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.val"
        "ue.initial.get_uniform.basic.mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036939 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036940 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036941 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.val"
        "ue.initial.get_uniform.basic.int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036942 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036943 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036944 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.ivec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036945 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036946 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036947 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.ivec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036948 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036949 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036950 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036951 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036952 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036953 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.val"
        "ue.initial.get_uniform.basic.uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036954 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036955 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036956 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.uvec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036957 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036958 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036959 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.uvec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036960 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value"
        ".initial.get_uniform.basic.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036961 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036962 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.valu"
        "e.initial.get_uniform.basic.uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036963 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic.bool_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036964 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.get_uniform.basic.bool_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036965 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic.bool_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036966 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic.bool_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036967 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic.bool_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036968 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.get_uniform.basic.bool_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036969 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic.bool_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036970 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.get_uniform.basic.bool_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036971 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic.bool_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036972 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.get_uniform.basic.bvec2_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036973 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.get_uniform.basic.bvec2_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036974 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic.bvec2_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036975 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic.bvec2_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036976 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.get_uniform.basic.bvec2_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036977 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic.bvec2_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036978 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic.bvec2_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036979 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.get_uniform.basic.bvec2_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036980 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic.bvec2_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036981 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.get_uniform.basic.bvec3_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036982 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.get_uniform.basic.bvec3_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036983 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic.bvec3_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036984 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic.bvec3_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036985 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.get_uniform.basic.bvec3_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036986 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic.bvec3_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036987 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic.bvec3_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036988 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.get_uniform.basic.bvec3_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036989 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic.bvec3_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036990 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.get_uniform.basic.bvec4_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036991 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.initi"
        "al.get_uniform.basic.bvec4_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036992 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic.bvec4_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036993 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic.bvec4_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036994 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.get_uniform.basic.bvec4_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036995 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic.bvec4_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036996 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic.bvec4_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036997 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.init"
        "ial.get_uniform.basic.bvec4_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036998 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic.bvec4_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036999 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.get_uniform.basic.sampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037000 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic.sampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037001 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value."
        "initial.get_uniform.basic.sampler2D_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037002 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.get_uniform.basic.samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037003 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.get_uniform.basic.samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037004 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.get_uniform.basic.samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037005 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037309 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037310 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037311 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037312 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037313 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_pointer.get_uniform.basic.vec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037314 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037315 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037316 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_pointer.get_uniform.basic.vec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037317 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037318 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037319 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_pointer.get_uniform.basic.vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037320 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037321 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037322 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_pointer.get_uniform.basic.mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037323 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.mat2_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037324 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.mat2_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037325 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.mat2_row_major_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037326 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037327 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037328 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037329 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.mat2x3_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037330 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic.mat2x3_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037331 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.mat2x3_row_major_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037332 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037333 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037334 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037335 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.mat2x4_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037336 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic.mat2x4_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037337 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.mat2x4_row_major_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037338 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037339 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037340 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037341 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.mat3x2_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037342 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic.mat3x2_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037343 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.mat3x2_row_major_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037344 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037345 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037346 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_pointer.get_uniform.basic.mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037347 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.mat3_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037348 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.mat3_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037349 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.mat3_row_major_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037350 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037351 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037352 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037353 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.mat3x4_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037354 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic.mat3x4_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037355 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.mat3x4_row_major_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037356 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037357 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037358 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037359 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.mat4x2_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037360 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic.mat4x2_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037361 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.mat4x2_row_major_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037362 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037363 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037364 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037365 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.mat4x3_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037366 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic.mat4x3_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037367 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.mat4x3_row_major_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037368 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037369 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037370 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_pointer.get_uniform.basic.mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037371 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.mat4_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037372 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.mat4_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037373 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.mat4_row_major_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037374 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037375 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037376 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_pointer.get_uniform.basic.int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037377 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037378 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037379 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.ivec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037380 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037381 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037382 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.ivec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037383 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037384 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037385 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037386 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037387 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037388 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_pointer.get_uniform.basic.uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037389 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037390 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037391 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.uvec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037392 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037393 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037394 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.uvec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037395 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_pointer.get_uniform.basic.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037396 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037397 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_pointer.get_uniform.basic.uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037398 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.bool_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037399 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.bool_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037400 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.bool_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037401 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.bool_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037402 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.bool_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037403 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.get_uniform.basic.bool_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037404 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.bool_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037405 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.bool_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037406 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.bool_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037407 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.bvec2_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037408 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic.bvec2_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037409 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.bvec2_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037410 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.bvec2_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037411 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.bvec2_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037412 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.bvec2_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037413 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.bvec2_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037414 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.bvec2_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037415 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.bvec2_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037416 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.bvec3_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037417 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic.bvec3_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037418 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.bvec3_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037419 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.bvec3_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037420 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.bvec3_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037421 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.bvec3_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037422 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.bvec3_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037423 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.bvec3_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037424 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.bvec3_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037425 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.bvec4_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037426 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by"
        "_pointer.get_uniform.basic.bvec4_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037427 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.bvec4_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037428 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.bvec4_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037429 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.bvec4_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037430 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.bvec4_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037431 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.bvec4_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037432 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_pointer.get_uniform.basic.bvec4_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037433 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.bvec4_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037434 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.get_uniform.basic.sampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037435 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.sampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037436 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_pointer.get_uniform.basic.sampler2D_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037437 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.get_uniform.basic.samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037438 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.get_uniform.basic.samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037439 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.get_uniform.basic.samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037440 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_value.get_uniform.basic.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037834 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_value.get_uniform.basic.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037835 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_value.get_uniform.basic.float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037836 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_value.get_uniform.basic.vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037837 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_value.get_uniform.basic.vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037838 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.as"
        "signed.by_value.get_uniform.basic.vec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037839 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_value.get_uniform.basic.vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037840 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_value.get_uniform.basic.vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037841 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.as"
        "signed.by_value.get_uniform.basic.vec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037842 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_value.get_uniform.basic.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037843 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_value.get_uniform.basic.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037844 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.as"
        "signed.by_value.get_uniform.basic.vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037845 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_value.get_uniform.basic.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037846 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_value.get_uniform.basic.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037847 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.as"
        "signed.by_value.get_uniform.basic.int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037848 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_value.get_uniform.basic.ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037849 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_value.get_uniform.basic.ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037850 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_value.get_uniform.basic.ivec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037851 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_value.get_uniform.basic.ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037852 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_value.get_uniform.basic.ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037853 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_value.get_uniform.basic.ivec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037854 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_value.get_uniform.basic.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037855 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_value.get_uniform.basic.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037856 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_value.get_uniform.basic.ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037857 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_value.get_uniform.basic.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037858 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_value.get_uniform.basic.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037859 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.as"
        "signed.by_value.get_uniform.basic.uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037860 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_value.get_uniform.basic.uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037861 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_value.get_uniform.basic.uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037862 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_value.get_uniform.basic.uvec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037863 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_value.get_uniform.basic.uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037864 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_value.get_uniform.basic.uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037865 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_value.get_uniform.basic.uvec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037866 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assi"
        "gned.by_value.get_uniform.basic.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037867 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_value.get_uniform.basic.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037868 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ass"
        "igned.by_value.get_uniform.basic.uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037869 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic.bool_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037870 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.get_uniform.basic.bool_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037871 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic.bool_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037872 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic.bool_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037873 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic.bool_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037874 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_value.get_uniform.basic.bool_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037875 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic.bool_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037876 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.get_uniform.basic.bool_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037877 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic.bool_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037878 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.get_uniform.basic.bvec2_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037879 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.get_uniform.basic.bvec2_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037880 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic.bvec2_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037881 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic.bvec2_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037882 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.get_uniform.basic.bvec2_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037883 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic.bvec2_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037884 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic.bvec2_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037885 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.get_uniform.basic.bvec2_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037886 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic.bvec2_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037887 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.get_uniform.basic.bvec3_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037888 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.get_uniform.basic.bvec3_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037889 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic.bvec3_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037890 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic.bvec3_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037891 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.get_uniform.basic.bvec3_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037892 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic.bvec3_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037893 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic.bvec3_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037894 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.get_uniform.basic.bvec3_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037895 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic.bvec3_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037896 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.get_uniform.basic.bvec4_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037897 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.b"
        "y_value.get_uniform.basic.bvec4_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037898 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic.bvec4_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037899 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic.bvec4_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037900 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.get_uniform.basic.bvec4_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037901 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic.bvec4_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037902 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic.bvec4_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037903 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_value.get_uniform.basic.bvec4_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037904 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic.bvec4_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037905 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_value.get_uniform.basic.sampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037906 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic.sampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037907 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assig"
        "ned.by_value.get_uniform.basic.sampler2D_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037908 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.get_uniform.basic.samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037909 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.get_uniform.basic.samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037910 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_value.get_uniform.basic.samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037911 end";
}
