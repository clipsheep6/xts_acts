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
#include "../ActsDeqpgles310017TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer."
        "get_uniform.nested_structs_arrays.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016819 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.g"
        "et_uniform.nested_structs_arrays.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016820 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer"
        ".get_uniform.nested_structs_arrays.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016821 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer."
        "get_uniform.nested_structs_arrays.mat4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016822 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.g"
        "et_uniform.nested_structs_arrays.mat4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016823 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer"
        ".get_uniform.nested_structs_arrays.mat4_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016824 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer."
        "get_uniform.nested_structs_arrays.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016825 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.g"
        "et_uniform.nested_structs_arrays.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016826 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer"
        ".get_uniform.nested_structs_arrays.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016827 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer."
        "get_uniform.nested_structs_arrays.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016828 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.g"
        "et_uniform.nested_structs_arrays.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016829 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer"
        ".get_uniform.nested_structs_arrays.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016830 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer."
        "get_uniform.nested_structs_arrays.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016831 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.g"
        "et_uniform.nested_structs_arrays.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016832 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer"
        ".get_uniform.nested_structs_arrays.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016833 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
        "iform.nested_structs_arrays.sampler2D_samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016834 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
        "form.nested_structs_arrays.sampler2D_samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016835 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_u"
        "niform.nested_structs_arrays.sampler2D_samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016836 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.g"
        "et_uniform.nested_structs_arrays.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017269 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.ge"
        "t_uniform.nested_structs_arrays.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017270 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value."
        "get_uniform.nested_structs_arrays.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017271 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.g"
        "et_uniform.nested_structs_arrays.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017272 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.ge"
        "t_uniform.nested_structs_arrays.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017273 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value."
        "get_uniform.nested_structs_arrays.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017274 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.g"
        "et_uniform.nested_structs_arrays.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017275 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.ge"
        "t_uniform.nested_structs_arrays.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017276 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value."
        "get_uniform.nested_structs_arrays.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017277 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.g"
        "et_uniform.nested_structs_arrays.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017278 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.ge"
        "t_uniform.nested_structs_arrays.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017279 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value."
        "get_uniform.nested_structs_arrays.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017280 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
        "form.nested_structs_arrays.sampler2D_samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017281 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
        "orm.nested_structs_arrays.sampler2D_samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017282 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_un"
        "iform.nested_structs_arrays.sampler2D_samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017283 end";
}
