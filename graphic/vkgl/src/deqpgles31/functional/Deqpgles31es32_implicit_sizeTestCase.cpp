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

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_"
        "arrays.es32.implicit_size.float_3x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004282 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_a"
        "rrays.es32.implicit_size.float_3x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004283 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of"
        "_arrays.es32.implicit_size.int_2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004284 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_"
        "arrays.es32.implicit_size.int_2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004285 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_a"
        "rrays.es32.implicit_size.bool_3x3x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004286 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_ar"
        "rays.es32.implicit_size.bool_3x3x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004287 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_ar"
        "rays.es32.implicit_size.struct_5x5x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004288 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arr"
        "ays.es32.implicit_size.struct_5x5x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004289 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_"
        "arrays.es32.implicit_size.vec3_1x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004290 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_a"
        "rrays.es32.implicit_size.vec3_1x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004291 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_a"
        "rrays.es32.implicit_size.ivec3_3x1x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004292 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_ar"
        "rays.es32.implicit_size.ivec3_3x1x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004293 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_"
        "arrays.es32.implicit_size.bvec3_3x1_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004294 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_a"
        "rrays.es32.implicit_size.bvec3_3x1_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004295 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_"
        "arrays.es32.implicit_size.mat3_3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004296 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_a"
        "rrays.es32.implicit_size.mat3_3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004297 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_a"
        "rrays.es32.implicit_size.mat3_3x3x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004298 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_ar"
        "rays.es32.implicit_size.mat3_3x3x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004299 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_"
        "arrays.es32.implicit_size.mat3_3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004300 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_a"
        "rrays.es32.implicit_size.mat3_3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004301 end";
}
