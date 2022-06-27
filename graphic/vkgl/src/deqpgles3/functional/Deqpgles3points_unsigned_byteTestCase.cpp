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
#include "../ActsDeqpgles30040TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart."
        "basic.points.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039936 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.basic"
        ".points.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039937 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.bas"
        "ic.points.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039938 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.duplic"
        "ate_restarts.points.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039999 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.duplicate_r"
        "estarts.points.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040000 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.duplicate"
        "_restarts.points.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040001 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end"
        "_restart.points.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040062 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_rest"
        "art.points.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040063 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_re"
        "start.points.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040064 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_restart_"
        "duplicate_restarts.points.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040125 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_restart_dupli"
        "cate_restarts.points.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040126 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_restart_dup"
        "licate_restarts.points.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040127 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begi"
        "n_restart.points.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040188 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_res"
        "tart.points.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040189 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_r"
        "estart.points.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040190 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart"
        "_duplicate_restarts.points.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040251 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_dupl"
        "icate_restarts.points.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040252 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_du"
        "plicate_restarts.points.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040253 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_rest"
        "art_end_restart.points.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040314 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_e"
        "nd_restart.points.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040315 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart"
        "_end_restart.points.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040316 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_end_r"
        "estart_duplicate_restarts.points.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040377 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restar"
        "t_duplicate_restarts.points.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040378 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_end_rest"
        "art_duplicate_restarts.points.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040379 end";
}
