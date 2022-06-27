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

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.imulextended.int_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001209 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.imulextended.int_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001210 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.imulextended.int_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001211 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.integer.imulextended.int_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001212 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.imulextended.int_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001213 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.imulextended.int_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001214 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.imulextended.ivec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001215 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.imulextended.ivec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001216 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.imulextended.ivec2_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001217 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.imulextended.ivec2_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001218 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.imulextended.ivec2_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001219 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.imulextended.ivec2_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001220 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.imulextended.ivec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001221 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.imulextended.ivec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001222 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.imulextended.ivec3_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001223 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.imulextended.ivec3_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001224 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.imulextended.ivec3_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001225 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.imulextended.ivec3_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001226 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.imulextended.ivec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001227 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.imulextended.ivec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001228 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.imulextended.ivec4_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001229 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.integer.imulextended.ivec4_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001230 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.imulextended.ivec4_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001231 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.imulextended.ivec4_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001232 end";
}
