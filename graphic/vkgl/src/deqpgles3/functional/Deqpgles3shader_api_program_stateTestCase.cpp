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
#include "../ActsDeqpgles30042TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api."
        "program_state.detach_shader_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041892 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.p"
        "rogram_state.detach_shader_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041893 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.p"
        "rogram_state.reattach_shader_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041894 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.pr"
        "ogram_state.reattach_shader_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041895 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api."
        "program_state.delete_shader_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041896 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.p"
        "rogram_state.delete_shader_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041897 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.p"
        "rogram_state.replace_shader_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041898 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.pr"
        "ogram_state.replace_shader_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041899 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.pr"
        "ogram_state.recompile_shader_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041900 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.pro"
        "gram_state.recompile_shader_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041901 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.p"
        "rogram_state.replace_source_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041902 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.pr"
        "ogram_state.replace_source_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041903 end";
}
