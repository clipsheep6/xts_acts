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

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_pointer.render.basic_array.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016954 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by"
        "_pointer.render.basic_array.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016955 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_pointer.render.basic_array.float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016956 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_pointer.render.basic_array.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016957 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by"
        "_pointer.render.basic_array.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016958 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_pointer.render.basic_array.vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016959 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_pointer.render.basic_array.mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016960 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by"
        "_pointer.render.basic_array.mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016961 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_pointer.render.basic_array.mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016962 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_poi"
        "nter.render.basic_array.mat4_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016963 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_poin"
        "ter.render.basic_array.mat4_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016964 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_po"
        "inter.render.basic_array.mat4_row_major_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016965 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_pointer.render.basic_array.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016966 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_pointer.render.basic_array.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016967 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform"
        ".by_pointer.render.basic_array.int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016968 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_pointer.render.basic_array.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016969 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by"
        "_pointer.render.basic_array.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016970 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_pointer.render.basic_array.ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016971 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_pointer.render.basic_array.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016972 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by"
        "_pointer.render.basic_array.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016973 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_pointer.render.basic_array.uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016974 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_pointer.render.basic_array.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016975 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by"
        "_pointer.render.basic_array.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016976 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_pointer.render.basic_array.uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016977 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_pointer.render.basic_array.bool_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016978 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by"
        "_pointer.render.basic_array.bool_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016979 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_pointer.render.basic_array.bool_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016980 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_pointer.render.basic_array.bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016981 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by"
        "_pointer.render.basic_array.bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016982 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_pointer.render.basic_array.bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016983 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_"
        "pointer.render.basic_array.sampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016984 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_p"
        "ointer.render.basic_array.sampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016985 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by"
        "_pointer.render.basic_array.sampler2D_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016986 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_value.render.basic_array.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017344 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_value.render.basic_array.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017345 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform"
        ".by_value.render.basic_array.float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017346 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_value.render.basic_array.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017347 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_value.render.basic_array.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017348 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform"
        ".by_value.render.basic_array.vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017349 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform"
        ".by_value.render.basic_array.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017350 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_value.render.basic_array.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017351 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_unifor"
        "m.by_value.render.basic_array.int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017352 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_value.render.basic_array.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017353 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_value.render.basic_array.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017354 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform"
        ".by_value.render.basic_array.ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017355 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_value.render.basic_array.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017356 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_value.render.basic_array.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017357 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform"
        ".by_value.render.basic_array.uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017358 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_value.render.basic_array.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017359 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_value.render.basic_array.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017360 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform"
        ".by_value.render.basic_array.uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017361 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_value.render.basic_array.bool_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017362 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_value.render.basic_array.bool_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017363 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform"
        ".by_value.render.basic_array.bool_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017364 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_value.render.basic_array.bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017365 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_value.render.basic_array.bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017366 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform"
        ".by_value.render.basic_array.bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017367 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by"
        "_value.render.basic_array.sampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017368 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.by_"
        "value.render.basic_array.sampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017369 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_value.render.basic_array.sampler2D_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017370 end";
}
