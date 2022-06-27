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

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader"
        ".validation.es31.varying.missing_input",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017842 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader"
        ".validation.es31.varying.missing_output",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017843 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader"
        ".validation.es31.varying.mismatch_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017844 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.v"
        "alidation.es31.varying.mismatch_precision",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017845 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validati"
        "on.es31.varying.mismatch_explicit_location_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017846 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation"
        ".es31.varying.mismatch_explicit_location_precision",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017847 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.valid"
        "ation.es31.varying.mismatch_explicit_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017848 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation."
        "es31.varying.mismatch_implicit_explicit_location_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017849 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation."
        "es31.varying.mismatch_implicit_explicit_location_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017850 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation."
        "es31.varying.mismatch_implicit_explicit_location_3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017851 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validati"
        "on.es31.varying.mismatch_different_struct_names",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017852 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.valida"
        "tion.es31.varying.mismatch_struct_member_name",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017853 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.valida"
        "tion.es31.varying.mismatch_struct_member_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017854 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validati"
        "on.es31.varying.mismatch_struct_member_precision",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017855 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.valida"
        "tion.es31.varying.mismatch_struct_member_order",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017856 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.valida"
        "tion.es31.varying.mismatch_array_element_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017857 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.val"
        "idation.es31.varying.mismatch_array_length",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017858 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.vali"
        "dation.es31.varying.mismatch_array_precision",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017859 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation.es3"
        "1.varying.mismatch_qualifier_vertex_flat_fragment_none",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017860 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation.es31"
        ".varying.mismatch_qualifier_vertex_flat_fragment_smooth",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017861 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation.es31."
        "varying.mismatch_qualifier_vertex_flat_fragment_centroid",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017862 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation.es31"
        ".varying.mismatch_qualifier_vertex_smooth_fragment_flat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017863 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation.es31."
        "varying.mismatch_qualifier_vertex_centroid_fragment_flat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017864 end";
}
