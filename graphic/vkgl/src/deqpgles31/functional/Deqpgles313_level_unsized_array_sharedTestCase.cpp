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
#include "../ActsDeqpgles310010TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009504 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009505 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009506 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009507 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.3_level_unsized_array.shared.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009508 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009509 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009510 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009511 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009512 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009513 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009514 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009515 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009516 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.bvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009517 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.bvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009518 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.bvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009519 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009520 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_le"
        "vel_unsized_array.shared.row_major_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009521 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.shared.column_major_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009522 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009523 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_le"
        "vel_unsized_array.shared.row_major_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009524 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.shared.column_major_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009525 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.shared.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009526 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_le"
        "vel_unsized_array.shared.row_major_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009527 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.shared.column_major_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009528 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_unsized_array.shared.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009529 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.shared.row_major_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009530 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_leve"
        "l_unsized_array.shared.column_major_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009531 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_unsized_array.shared.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009532 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.shared.row_major_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009533 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_leve"
        "l_unsized_array.shared.column_major_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009534 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_unsized_array.shared.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009535 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.shared.row_major_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009536 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_leve"
        "l_unsized_array.shared.column_major_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009537 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_unsized_array.shared.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009538 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.shared.row_major_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009539 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_leve"
        "l_unsized_array.shared.column_major_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009540 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_unsized_array.shared.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009541 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.shared.row_major_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009542 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_leve"
        "l_unsized_array.shared.column_major_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009543 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_unsized_array.shared.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009544 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.shared.row_major_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009545 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_leve"
        "l_unsized_array.shared.column_major_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009546 end";
}
