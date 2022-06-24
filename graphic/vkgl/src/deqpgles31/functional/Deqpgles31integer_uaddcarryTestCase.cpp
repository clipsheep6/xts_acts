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

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.uaddcarry.uint_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001041 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uint_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001042 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uint_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001043 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uint_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001044 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uint_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001045 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uint_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001046 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uint_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001047 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uint_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001048 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uint_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001049 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.uaddcarry.uint_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001050 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uint_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001051 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uint_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001052 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uint_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001053 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uint_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001054 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uint_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001055 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.uaddcarry.uint_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001056 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uint_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001057 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uint_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001058 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uvec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001059 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001060 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec2_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001061 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.uaddcarry.uvec2_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001062 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec2_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001063 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uvec2_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001064 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001065 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uvec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001066 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uvec2_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001067 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.uaddcarry.uvec2_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001068 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.uaddcarry.uvec2_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001069 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uvec2_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001070 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uvec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001071 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001072 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec2_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001073 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.uaddcarry.uvec2_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001074 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uvec2_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001075 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec2_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001076 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uvec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001077 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001078 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec3_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001079 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.uaddcarry.uvec3_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001080 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec3_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001081 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uvec3_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001082 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001083 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uvec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001084 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uvec3_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001085 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.uaddcarry.uvec3_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001086 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.uaddcarry.uvec3_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001087 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uvec3_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001088 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uvec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001089 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001090 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec3_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001091 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.uaddcarry.uvec3_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001092 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uvec3_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001093 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec3_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001094 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uvec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001095 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001096 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001097, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001097 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec4_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001097 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001097 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.uaddcarry.uvec4_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001098 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001099, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001099 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec4_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001099 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001099 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001100, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001100 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uvec4_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001100 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001100 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001101 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uvec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001102 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uvec4_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001103 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.uaddcarry.uvec4_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001104 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.uaddcarry.uvec4_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001105 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uvec4_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001106 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.uaddcarry.uvec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001107 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001108 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec4_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001109 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.uaddcarry.uvec4_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001110 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.uaddcarry.uvec4_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001111 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.uaddcarry.uvec4_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001112 end";
}
