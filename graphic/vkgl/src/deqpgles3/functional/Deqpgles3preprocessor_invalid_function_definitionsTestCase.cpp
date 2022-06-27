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
#include "../ActsDeqpgles30001TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.in"
        "valid_function_definitions.arguments_1_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000910 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inv"
        "alid_function_definitions.arguments_1_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000911 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.in"
        "valid_function_definitions.arguments_2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000912 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inv"
        "alid_function_definitions.arguments_2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000913 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.in"
        "valid_function_definitions.arguments_3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000914 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inv"
        "alid_function_definitions.arguments_3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000915 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.in"
        "valid_function_definitions.arguments_4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000916 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inv"
        "alid_function_definitions.arguments_4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000917 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.in"
        "valid_function_definitions.arguments_5_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000918 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inv"
        "alid_function_definitions.arguments_5_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000919 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.in"
        "valid_function_definitions.arguments_6_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000920 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inv"
        "alid_function_definitions.arguments_6_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000921 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.in"
        "valid_function_definitions.arguments_7_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000922 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inv"
        "alid_function_definitions.arguments_7_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000923 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.in"
        "valid_function_definitions.arguments_8_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000924 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inv"
        "alid_function_definitions.arguments_8_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000925 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inval"
        "id_function_definitions.unique_param_name_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000926 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.invali"
        "d_function_definitions.unique_param_name_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000927 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inva"
        "lid_function_definitions.argument_list_1_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000928 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inval"
        "id_function_definitions.argument_list_1_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000929 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inva"
        "lid_function_definitions.argument_list_2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000930 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inval"
        "id_function_definitions.argument_list_2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000931 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inva"
        "lid_function_definitions.argument_list_3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000932 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.inval"
        "id_function_definitions.argument_list_3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000933 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.invalid_"
        "function_definitions.no_closing_parenthesis_1_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000934 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.invalid_f"
        "unction_definitions.no_closing_parenthesis_1_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000935 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.invalid_"
        "function_definitions.no_closing_parenthesis_2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000936 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.invalid_f"
        "unction_definitions.no_closing_parenthesis_2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000937 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.invalid_"
        "function_definitions.no_closing_parenthesis_3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000938 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.invalid_f"
        "unction_definitions.no_closing_parenthesis_3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000939 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.invalid_"
        "function_definitions.no_closing_parenthesis_4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000940 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.invalid_f"
        "unction_definitions.no_closing_parenthesis_4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000941 end";
}
