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
#include "../ActsDeqpgles30039TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rgba32i_lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038912 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba32i_lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038913 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba32i_lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038914 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba32i_lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038915 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rgba32i_mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038916 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ou"
        "t.basic.int.rgba32i_mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038917 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ou"
        "t.basic.int.rgba32i_mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038918 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ou"
        "t.basic.int.rgba32i_mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038919 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba32i_highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038920 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rgba32i_highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038921 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rgba32i_highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038922 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rgba32i_highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038923 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rgba16i_lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038924 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba16i_lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038925 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba16i_lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038926 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba16i_lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038927 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rgba16i_mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038928 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ou"
        "t.basic.int.rgba16i_mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038929 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ou"
        "t.basic.int.rgba16i_mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038930 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ou"
        "t.basic.int.rgba16i_mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038931 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba16i_highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038932 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rgba16i_highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038933 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rgba16i_highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038934 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rgba16i_highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038935 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rgba8i_lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038936 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba8i_lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038937 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba8i_lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038938 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba8i_lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038939 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba8i_mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038940 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rgba8i_mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038941 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rgba8i_mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038942 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rgba8i_mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038943 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rgba8i_highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038944 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba8i_highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038945 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba8i_highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038946 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rgba8i_highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038947 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_out.basic.int.rg32i_lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038948 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg32i_lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038949 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg32i_lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038950 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg32i_lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038951 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rg32i_mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038952 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rg32i_mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038953 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rg32i_mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038954 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rg32i_mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038955 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg32i_highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038956 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rg32i_highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038957 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rg32i_highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038958 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rg32i_highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038959 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_out.basic.int.rg16i_lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038960 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg16i_lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038961 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg16i_lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038962 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg16i_lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038963 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rg16i_mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038964 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rg16i_mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038965 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rg16i_mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038966 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_o"
        "ut.basic.int.rg16i_mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038967 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg16i_highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038968 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rg16i_highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038969 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rg16i_highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038970 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rg16i_highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038971 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_out.basic.int.rg8i_lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038972 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg8i_lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038973 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg8i_lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038974 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg8i_lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038975 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg8i_mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038976 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rg8i_mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038977 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rg8i_mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038978 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.rg8i_mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038979 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_out.basic.int.rg8i_highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038980 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg8i_highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038981 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg8i_highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038982 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.rg8i_highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038983 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_out.basic.int.r32i_lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038984 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r32i_lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038985 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r32i_lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038986 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r32i_lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038987 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r32i_mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038988 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.r32i_mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038989 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.r32i_mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038990 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.r32i_mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038991 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_out.basic.int.r32i_highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038992 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r32i_highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038993 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r32i_highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038994 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r32i_highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038995 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_out.basic.int.r16i_lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038996 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r16i_lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038997 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r16i_lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038998 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r16i_lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038999 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r16i_mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039000 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.r16i_mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039001 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.r16i_mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039002 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.r16i_mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039003 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_out.basic.int.r16i_highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039004 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r16i_highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039005 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r16i_highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039006 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r16i_highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039007 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragme"
        "nt_out.basic.int.r8i_lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039008 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_out.basic.int.r8i_lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039009 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_out.basic.int.r8i_lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039010 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_out.basic.int.r8i_lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039011 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r8i_mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039012 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.r8i_mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039013 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.r8i_mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039014 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_"
        "out.basic.int.r8i_mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039015 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_out.basic.int.r8i_highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039016 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r8i_highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039017 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r8i_highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039018 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_out.basic.int.r8i_highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039019 end";
}
