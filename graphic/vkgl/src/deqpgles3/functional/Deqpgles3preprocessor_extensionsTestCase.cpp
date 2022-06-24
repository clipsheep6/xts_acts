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
#include "../ActsDeqpgles30002TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.pre"
        "processor.extensions.basic_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001148 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prep"
        "rocessor.extensions.basic_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001149 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepr"
        "ocessor.extensions.macro_exp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001150 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepro"
        "cessor.extensions.macro_exp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001151 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocesso"
        "r.extensions.missing_extension_name_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001152 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor"
        ".extensions.missing_extension_name_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001153 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocesso"
        "r.extensions.invalid_extension_name_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001154 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor"
        ".extensions.invalid_extension_name_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001155 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproc"
        "essor.extensions.missing_colon_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001156 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproce"
        "ssor.extensions.missing_colon_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001157 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproc"
        "essor.extensions.expected_colon_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001158 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproce"
        "ssor.extensions.expected_colon_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001159 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproce"
        "ssor.extensions.missing_behavior_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001160 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproces"
        "sor.extensions.missing_behavior_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001161 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproces"
        "sor.extensions.invalid_behavior_1_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001162 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocess"
        "or.extensions.invalid_behavior_1_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001163 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproces"
        "sor.extensions.invalid_behavior_2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001164 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocess"
        "or.extensions.invalid_behavior_2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001165 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocess"
        "or.extensions.invalid_char_in_name_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001166 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocesso"
        "r.extensions.invalid_char_in_name_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001167 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor"
        ".extensions.invalid_char_in_behavior_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001168 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor."
        "extensions.invalid_char_in_behavior_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001169 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocess"
        "or.extensions.unterminated_comment_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001170 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocesso"
        "r.extensions.unterminated_comment_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001171 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.ex"
        "tensions.after_non_preprocessing_tokens_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001172 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preprocessor.ext"
        "ensions.after_non_preprocessing_tokens_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001173 end";
}
