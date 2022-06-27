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
#include "../ActsDeqpgles310018TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_arr"
        "ay_assign_full.array_in_struct.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017467 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_arra"
        "y_assign_full.array_in_struct.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017468 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_ar"
        "ray_assign_full.array_in_struct.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017469 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_ar"
        "ray_assign_full.array_in_struct.mat4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017470 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_arr"
        "ay_assign_full.array_in_struct.mat4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017471 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_a"
        "rray_assign_full.array_in_struct.mat4_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017472 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_ar"
        "ray_assign_full.array_in_struct.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017473 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_arr"
        "ay_assign_full.array_in_struct.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017474 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_a"
        "rray_assign_full.array_in_struct.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017475 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_arr"
        "ay_assign_full.array_in_struct.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017476 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_arra"
        "y_assign_full.array_in_struct.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017477 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_ar"
        "ray_assign_full.array_in_struct.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017478 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_arr"
        "ay_assign_full.array_in_struct.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017479 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_arra"
        "y_assign_full.array_in_struct.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017480 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_ar"
        "ray_assign_full.array_in_struct.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017481 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_array_as"
        "sign_full.array_in_struct.sampler2D_samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017482 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_array_ass"
        "ign_full.array_in_struct.sampler2D_samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017483 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.basic_array_a"
        "ssign_full.array_in_struct.sampler2D_samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017484 end";
}
