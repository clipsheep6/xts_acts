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
#include "../ActsDeqpgles310005TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declarations"
        ".unspecified_precision.float_partially_specified_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004414 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.de"
        "clarations.unspecified_precision.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004415 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.de"
        "clarations.unspecified_precision.vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004416 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.de"
        "clarations.unspecified_precision.vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004417 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.de"
        "clarations.unspecified_precision.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004418 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.dec"
        "larations.unspecified_precision.sampler3D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004419 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.decl"
        "arations.unspecified_precision.sampler3D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004420 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declara"
        "tions.unspecified_precision.samplerCubeShadow_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004421 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declarat"
        "ions.unspecified_precision.samplerCubeShadow_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004422 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declar"
        "ations.unspecified_precision.sampler2DShadow_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004423 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declara"
        "tions.unspecified_precision.sampler2DShadow_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004424 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declar"
        "ations.unspecified_precision.sampler2DArray_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004425 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declara"
        "tions.unspecified_precision.sampler2DArray_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004426 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declarati"
        "ons.unspecified_precision.sampler2DArrayShadow_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004427 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declaratio"
        "ns.unspecified_precision.sampler2DArrayShadow_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004428 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.decl"
        "arations.unspecified_precision.isampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004429 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.decla"
        "rations.unspecified_precision.isampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004430 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.decl"
        "arations.unspecified_precision.isampler3D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004431 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.decla"
        "rations.unspecified_precision.isampler3D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004432 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.decla"
        "rations.unspecified_precision.isamplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004433 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declar"
        "ations.unspecified_precision.isamplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004434 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declar"
        "ations.unspecified_precision.isampler2DArray_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004435 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declara"
        "tions.unspecified_precision.isampler2DArray_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004436 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.decl"
        "arations.unspecified_precision.usampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004437 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.decla"
        "rations.unspecified_precision.usampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004438 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.decl"
        "arations.unspecified_precision.usampler3D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004439 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.decla"
        "rations.unspecified_precision.usampler3D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004440 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.decla"
        "rations.unspecified_precision.usamplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004441 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declar"
        "ations.unspecified_precision.usamplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004442 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declar"
        "ations.unspecified_precision.usampler2DArray_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004443 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.declara"
        "tions.unspecified_precision.usampler2DArray_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004444 end";
}
