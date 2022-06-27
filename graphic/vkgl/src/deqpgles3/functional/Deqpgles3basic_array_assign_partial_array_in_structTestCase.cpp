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

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basic"
        "_array_assign_partial.array_in_struct.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038284 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basic_"
        "array_assign_partial.array_in_struct.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038285 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
        "c_array_assign_partial.array_in_struct.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038286 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basic"
        "_array_assign_partial.array_in_struct.mat4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038287 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basic_"
        "array_assign_partial.array_in_struct.mat4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038288 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
        "c_array_assign_partial.array_in_struct.mat4_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038289 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basic"
        "_array_assign_partial.array_in_struct.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038290 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basic_"
        "array_assign_partial.array_in_struct.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038291 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
        "c_array_assign_partial.array_in_struct.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038292 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basic"
        "_array_assign_partial.array_in_struct.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038293 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basic_"
        "array_assign_partial.array_in_struct.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038294 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
        "c_array_assign_partial.array_in_struct.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038295 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basic"
        "_array_assign_partial.array_in_struct.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038296 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basic_"
        "array_assign_partial.array_in_struct.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038297 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
        "c_array_assign_partial.array_in_struct.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038298 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basic_array"
        "_assign_partial.array_in_struct.sampler2D_samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038299 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basic_array_"
        "assign_partial.array_in_struct.sampler2D_samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038300 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.basic_arra"
        "y_assign_partial.array_in_struct.sampler2D_samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038301 end";
}
