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

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
        "form.basic_array_first_elem_without_brackets.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016720 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_unif"
        "orm.basic_array_first_elem_without_brackets.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016721 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
        "iform.basic_array_first_elem_without_brackets.float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016722 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
        "iform.basic_array_first_elem_without_brackets.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016723 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
        "form.basic_array_first_elem_without_brackets.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016724 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_u"
        "niform.basic_array_first_elem_without_brackets.vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016725 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
        "iform.basic_array_first_elem_without_brackets.mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016726 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
        "form.basic_array_first_elem_without_brackets.mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016727 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_u"
        "niform.basic_array_first_elem_without_brackets.mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016728 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
        ".basic_array_first_elem_without_brackets.mat4_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016729 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform."
        "basic_array_first_elem_without_brackets.mat4_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016730 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
        "m.basic_array_first_elem_without_brackets.mat4_row_major_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016731 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
        "iform.basic_array_first_elem_without_brackets.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016732 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
        "form.basic_array_first_elem_without_brackets.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016733 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_u"
        "niform.basic_array_first_elem_without_brackets.int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016734 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
        "form.basic_array_first_elem_without_brackets.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016735 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_unif"
        "orm.basic_array_first_elem_without_brackets.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016736 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
        "iform.basic_array_first_elem_without_brackets.ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016737 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
        "iform.basic_array_first_elem_without_brackets.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016738 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
        "form.basic_array_first_elem_without_brackets.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016739 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_u"
        "niform.basic_array_first_elem_without_brackets.uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016740 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
        "form.basic_array_first_elem_without_brackets.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016741 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_unif"
        "orm.basic_array_first_elem_without_brackets.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016742 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
        "iform.basic_array_first_elem_without_brackets.uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016743 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
        ".basic_array_first_elem_without_brackets.bool_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016744 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform."
        "basic_array_first_elem_without_brackets.bool_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016745 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
        "m.basic_array_first_elem_without_brackets.bool_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016746 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
        "m.basic_array_first_elem_without_brackets.bool_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016747 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
        ".basic_array_first_elem_without_brackets.bool_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016748 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifo"
        "rm.basic_array_first_elem_without_brackets.bool_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016749 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
        ".basic_array_first_elem_without_brackets.bool_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016750 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform."
        "basic_array_first_elem_without_brackets.bool_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016751 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
        "m.basic_array_first_elem_without_brackets.bool_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016752 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform."
        "basic_array_first_elem_without_brackets.bvec4_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016753 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform.b"
        "asic_array_first_elem_without_brackets.bvec4_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016754 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
        ".basic_array_first_elem_without_brackets.bvec4_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016755 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
        ".basic_array_first_elem_without_brackets.bvec4_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016756 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform."
        "basic_array_first_elem_without_brackets.bvec4_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016757 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
        "m.basic_array_first_elem_without_brackets.bvec4_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016758 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
        ".basic_array_first_elem_without_brackets.bvec4_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016759 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform."
        "basic_array_first_elem_without_brackets.bvec4_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016760 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
        "m.basic_array_first_elem_without_brackets.bvec4_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016761 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifo"
        "rm.basic_array_first_elem_without_brackets.sampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016762 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
        "m.basic_array_first_elem_without_brackets.sampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016763 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_pointer.get_unif"
        "orm.basic_array_first_elem_without_brackets.sampler2D_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016764 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
        "orm.basic_array_first_elem_without_brackets.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017185 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_unifo"
        "rm.basic_array_first_elem_without_brackets.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017186 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
        "form.basic_array_first_elem_without_brackets.float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017187 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
        "form.basic_array_first_elem_without_brackets.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017188 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
        "orm.basic_array_first_elem_without_brackets.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017189 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_un"
        "iform.basic_array_first_elem_without_brackets.vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017190 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
        "form.basic_array_first_elem_without_brackets.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017191 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
        "orm.basic_array_first_elem_without_brackets.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017192 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_un"
        "iform.basic_array_first_elem_without_brackets.int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017193 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
        "orm.basic_array_first_elem_without_brackets.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017194 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_unifo"
        "rm.basic_array_first_elem_without_brackets.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017195 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
        "form.basic_array_first_elem_without_brackets.ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017196 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
        "form.basic_array_first_elem_without_brackets.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017197 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
        "orm.basic_array_first_elem_without_brackets.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017198 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_un"
        "iform.basic_array_first_elem_without_brackets.uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017199 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
        "orm.basic_array_first_elem_without_brackets.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017200 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_unifo"
        "rm.basic_array_first_elem_without_brackets.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017201 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
        "form.basic_array_first_elem_without_brackets.uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017202 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform."
        "basic_array_first_elem_without_brackets.bool_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017203 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform.b"
        "asic_array_first_elem_without_brackets.bool_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017204 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform"
        ".basic_array_first_elem_without_brackets.bool_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017205 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform"
        ".basic_array_first_elem_without_brackets.bool_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017206 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform."
        "basic_array_first_elem_without_brackets.bool_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017207 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_unifor"
        "m.basic_array_first_elem_without_brackets.bool_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017208 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform."
        "basic_array_first_elem_without_brackets.bool_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017209 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform.b"
        "asic_array_first_elem_without_brackets.bool_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017210 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform"
        ".basic_array_first_elem_without_brackets.bool_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017211 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform.b"
        "asic_array_first_elem_without_brackets.bvec4_api_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017212 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform.ba"
        "sic_array_first_elem_without_brackets.bvec4_api_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017213 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform."
        "basic_array_first_elem_without_brackets.bvec4_api_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017214 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform."
        "basic_array_first_elem_without_brackets.bvec4_api_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017215 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform.b"
        "asic_array_first_elem_without_brackets.bvec4_api_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017216 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform"
        ".basic_array_first_elem_without_brackets.bvec4_api_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017217 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform."
        "basic_array_first_elem_without_brackets.bvec4_api_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017218 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform.b"
        "asic_array_first_elem_without_brackets.bvec4_api_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017219 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform"
        ".basic_array_first_elem_without_brackets.bvec4_api_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017220 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_unifor"
        "m.basic_array_first_elem_without_brackets.sampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017221 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_uniform"
        ".basic_array_first_elem_without_brackets.sampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017222 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_value.get_unifo"
        "rm.basic_array_first_elem_without_brackets.sampler2D_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017223 end";
}
