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

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.b"
        "asic.line_loop.unsigned_int.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039960 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.basic."
        "line_loop.unsigned_int.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039961 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.basi"
        "c.line_loop.unsigned_int.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039962 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.duplica"
        "te_restarts.line_loop.unsigned_int.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040023 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.duplicate_re"
        "starts.line_loop.unsigned_int.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040024 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.duplicate_"
        "restarts.line_loop.unsigned_int.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040025 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_"
        "restart.line_loop.unsigned_int.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040086 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_resta"
        "rt.line_loop.unsigned_int.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040087 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_res"
        "tart.line_loop.unsigned_int.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040088 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_restart_d"
        "uplicate_restarts.line_loop.unsigned_int.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040149 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_restart_duplic"
        "ate_restarts.line_loop.unsigned_int.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040150 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_restart_dupl"
        "icate_restarts.line_loop.unsigned_int.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040151 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin"
        "_restart.line_loop.unsigned_int.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040212 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_rest"
        "art.line_loop.unsigned_int.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040213 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_re"
        "start.line_loop.unsigned_int.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040214 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_"
        "duplicate_restarts.line_loop.unsigned_int.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040275 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_dupli"
        "cate_restarts.line_loop.unsigned_int.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040276 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_dup"
        "licate_restarts.line_loop.unsigned_int.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040277 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_resta"
        "rt_end_restart.line_loop.unsigned_int.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040338 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_en"
        "d_restart.line_loop.unsigned_int.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040339 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_"
        "end_restart.line_loop.unsigned_int.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040340 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_end_re"
        "start_duplicate_restarts.line_loop.unsigned_int.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040401 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart"
        "_duplicate_restarts.line_loop.unsigned_int.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040402 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_end_resta"
        "rt_duplicate_restarts.line_loop.unsigned_int.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040403 end";
}
