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

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.less.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011912 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.less.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011913 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.less.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011914 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.less.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011915 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.less.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011916 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.less.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011917 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.less.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011918 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.less.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011919 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.less.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011920 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.less.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011921 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.less.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011922 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.less.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011923 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.less.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011924 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.less.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011925 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.less.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011926 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.less.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011927 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.less.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011928 end";
}

static HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.less.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011929 end";
}
