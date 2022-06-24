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
#include "../ActsDeqpgles310008TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block"
        ".es31.valid.repeat_interface_qualifier_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007183 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block."
        "es31.valid.repeat_interface_qualifier_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007184 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform"
        "_block.es31.valid.layout_shared_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007185 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_"
        "block.es31.valid.layout_shared_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007186 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform"
        "_block.es31.valid.layout_packed_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007187 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_"
        "block.es31.valid.layout_packed_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007188 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform"
        "_block.es31.valid.layout_std140_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007189 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_"
        "block.es31.valid.layout_std140_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007190 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_"
        "block.es31.valid.layout_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007191 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_b"
        "lock.es31.valid.layout_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007192 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_bl"
        "ock.es31.valid.layout_column_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007193 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_blo"
        "ck.es31.valid.layout_column_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007194 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.unifo"
        "rm_block.es31.valid.layout_all_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007195 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.unifor"
        "m_block.es31.valid.layout_all_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007196 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_b"
        "lock.es31.valid.layout_all_8_times_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007197 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_bl"
        "ock.es31.valid.layout_all_8_times_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007198 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_bl"
        "ock.es31.valid.global_layout_shared_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007199 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_blo"
        "ck.es31.valid.global_layout_shared_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007200 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_bl"
        "ock.es31.valid.global_layout_packed_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007201 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_blo"
        "ck.es31.valid.global_layout_packed_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007202 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_bl"
        "ock.es31.valid.global_layout_std140_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007203 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_blo"
        "ck.es31.valid.global_layout_std140_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007204 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_bloc"
        "k.es31.valid.global_layout_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007205 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block"
        ".es31.valid.global_layout_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007206 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block"
        ".es31.valid.global_layout_column_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007207 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block."
        "es31.valid.global_layout_column_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007208 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_b"
        "lock.es31.valid.global_layout_all_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007209 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_bl"
        "ock.es31.valid.global_layout_all_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007210 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block"
        ".es31.valid.global_layout_all_8_times_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007211 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block."
        "es31.valid.global_layout_all_8_times_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007212 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_bloc"
        "k.es31.valid.member_layout_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007213 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block"
        ".es31.valid.member_layout_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007214 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block"
        ".es31.valid.member_layout_column_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007215 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block."
        "es31.valid.member_layout_column_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007216 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block."
        "es31.valid.member_layout_row_major_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007217 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block.e"
        "s31.valid.member_layout_row_major_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007218 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block.es"
        "31.valid.member_layout_column_major_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007219 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block.es3"
        "1.valid.member_layout_column_major_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007220 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_b"
        "lock.es31.valid.member_layout_all_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007221 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_bl"
        "ock.es31.valid.member_layout_all_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007222 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block"
        ".es31.valid.member_layout_all_8_times_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007223 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block."
        "es31.valid.member_layout_all_8_times_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007224 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_"
        "block.es31.valid.no_instance_name_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007225 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_b"
        "lock.es31.valid.no_instance_name_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007226 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block."
        "es31.valid.same_variable_and_block_name_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007227 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block.e"
        "s31.valid.same_variable_and_block_name_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007228 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block.es"
        "31.valid.same_variable_and_instance_name_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007229 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block.es3"
        "1.valid.same_variable_and_instance_name_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007230 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform"
        "_block.es31.valid.struct_member_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007231 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_"
        "block.es31.valid.struct_member_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007232 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block.e"
        "s31.valid.struct_member_layout_row_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007233 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block.es"
        "31.valid.struct_member_layout_row_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007234 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block.es3"
        "1.valid.struct_member_layout_column_major_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007235 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block.es31"
        ".valid.struct_member_layout_column_major_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007236 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_bloc"
        "k.es31.valid.struct_member_layout_all_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007237 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block"
        ".es31.valid.struct_member_layout_all_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007238 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block.es"
        "31.valid.struct_member_layout_all_8_times_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007239 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block.es3"
        "1.valid.struct_member_layout_all_8_times_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007240 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_"
        "block.es31.valid.long_block_name_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007241 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_b"
        "lock.es31.valid.long_block_name_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007242 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_b"
        "lock.es31.valid.long_instance_name_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007243 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_bl"
        "ock.es31.valid.long_instance_name_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007244 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_blo"
        "ck.es31.valid.underscore_block_name_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007245 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_bloc"
        "k.es31.valid.underscore_block_name_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007246 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_bloc"
        "k.es31.valid.underscore_instance_name_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007247 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.uniform_block"
        ".es31.valid.underscore_instance_name_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007248 end";
}
