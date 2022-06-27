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

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001124, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001124 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.p"
        "reprocessor.builtin.line_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001124 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001124 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.pr"
        "eprocessor.builtin.line_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001125 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepr"
        "ocessor.builtin.line_and_file_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001126 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepro"
        "cessor.builtin.line_and_file_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001127 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepro"
        "cessor.builtin.line_defined_1_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001128 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproc"
        "essor.builtin.line_defined_1_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001129 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepro"
        "cessor.builtin.line_defined_2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001130 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproc"
        "essor.builtin.line_defined_2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001131 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prep"
        "rocessor.builtin.empty_line_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001132 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepr"
        "ocessor.builtin.empty_line_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001133 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproce"
        "ssor.builtin.invalid_line_file_1_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001134 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproces"
        "sor.builtin.invalid_line_file_1_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001135 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproce"
        "ssor.builtin.invalid_line_file_3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001136 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproces"
        "sor.builtin.invalid_line_file_3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001137 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproce"
        "ssor.builtin.invalid_line_file_4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001138 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.preproces"
        "sor.builtin.invalid_line_file_4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001139 end";
}
