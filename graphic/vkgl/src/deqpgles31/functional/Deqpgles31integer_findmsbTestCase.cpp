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

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.integer.findmsb.int_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001953 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.int_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001954 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.int_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001955 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.int_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001956 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.int_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001957 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.integer.findmsb.int_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001958 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.int_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001959 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.int_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001960 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.int_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001961 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.int_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001962 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.int_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001963 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.int_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001964 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.integer.findmsb.int_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001965 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.int_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001966 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.int_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001967 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.int_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001968 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.int_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001969 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.int_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001970 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.ivec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001971 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001972 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec2_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001973 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.ivec2_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001974 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec2_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001975 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.ivec2_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001976 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001977 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.ivec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001978 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.ivec2_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001979 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findmsb.ivec2_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001980 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.ivec2_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001981 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.ivec2_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001982 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.ivec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001983 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001984 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec2_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001985 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.ivec2_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001986 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.ivec2_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001987 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec2_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001988 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.ivec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001989 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001990 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec3_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001991 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.ivec3_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001992 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec3_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001993 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.ivec3_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001994 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001995 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.ivec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001996 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.ivec3_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001997 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findmsb.ivec3_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001998 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.ivec3_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001999 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.ivec3_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002000 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.ivec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002001 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002002 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec3_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002003 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.ivec3_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002004 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.ivec3_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002005 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec3_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002006 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.ivec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002007 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002008 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec4_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002009 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.ivec4_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002010 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec4_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002011 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.ivec4_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002012 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002013 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.ivec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002014 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.ivec4_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002015 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findmsb.ivec4_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002016 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.ivec4_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002017 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.ivec4_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002018 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.ivec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002019 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002020 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec4_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002021 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.ivec4_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002022 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.ivec4_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002023 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.ivec4_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002024 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.integer.findmsb.uint_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002025 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uint_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002026 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uint_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002027 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uint_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002028 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uint_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002029 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uint_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002030 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uint_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002031 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uint_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002032 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uint_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002033 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findmsb.uint_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002034 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uint_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002035 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uint_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002036 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uint_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002037 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uint_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002038 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uint_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002039 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.uint_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002040 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uint_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002041 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uint_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002042 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uvec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002043 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002044 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec2_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002045 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.uvec2_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002046 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec2_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002047 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uvec2_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002048 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002049 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uvec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002050 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uvec2_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002051 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findmsb.uvec2_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002052 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.uvec2_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002053 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uvec2_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002054 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uvec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002055 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002056 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec2_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002057 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.uvec2_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002058 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uvec2_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002059 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec2_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002060 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uvec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002061 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002062 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec3_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002063 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.uvec3_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002064 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec3_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002065 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uvec3_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002066 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002067 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uvec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002068 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uvec3_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002069 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findmsb.uvec3_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002070 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.uvec3_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002071 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uvec3_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002072 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uvec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002073 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002074 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec3_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002075 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.uvec3_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002076 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uvec3_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002077 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec3_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002078 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uvec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002079 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002080 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec4_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002081 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.uvec4_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002082 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec4_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002083 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uvec4_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002084 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002085 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uvec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002086 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uvec4_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002087 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findmsb.uvec4_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002088 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.uvec4_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002089 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uvec4_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002090 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findmsb.uvec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002091 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002092 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec4_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002093 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findmsb.uvec4_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002094 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findmsb.uvec4_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002095 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findmsb.uvec4_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002096 end";
}
