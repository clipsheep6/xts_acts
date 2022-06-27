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

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009547 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009548 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009549 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009550 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.3_level_unsized_array.packed.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009551 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009552 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009553 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009554 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009555 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009556 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009557 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009558 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009559 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.bvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009560 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.bvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009561 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.bvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009562 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009563 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_le"
        "vel_unsized_array.packed.row_major_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009564 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.packed.column_major_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009565 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009566 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_le"
        "vel_unsized_array.packed.row_major_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009567 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.packed.column_major_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009568 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".3_level_unsized_array.packed.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009569 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_le"
        "vel_unsized_array.packed.row_major_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009570 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.packed.column_major_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009571 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_unsized_array.packed.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009572 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.packed.row_major_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009573 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_leve"
        "l_unsized_array.packed.column_major_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009574 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_unsized_array.packed.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009575 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.packed.row_major_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009576 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_leve"
        "l_unsized_array.packed.column_major_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009577 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_unsized_array.packed.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009578 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.packed.row_major_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009579 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_leve"
        "l_unsized_array.packed.column_major_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009580 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_unsized_array.packed.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009581 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.packed.row_major_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009582 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_leve"
        "l_unsized_array.packed.column_major_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009583 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_unsized_array.packed.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009584 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.packed.row_major_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009585 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_leve"
        "l_unsized_array.packed.column_major_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009586 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_unsized_array.packed.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009587 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_lev"
        "el_unsized_array.packed.row_major_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009588 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_leve"
        "l_unsized_array.packed.column_major_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009589 end";
}
