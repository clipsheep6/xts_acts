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

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart"
        ".basic.lines.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039963 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.basi"
        "c.lines.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039964 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.ba"
        "sic.lines.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039965 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.duplic"
        "ate_restarts.lines.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040026 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.duplicate_r"
        "estarts.lines.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040027 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.duplicate"
        "_restarts.lines.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040028 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.en"
        "d_restart.lines.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040089 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_res"
        "tart.lines.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040090 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_r"
        "estart.lines.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040091 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_restart_"
        "duplicate_restarts.lines.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040152 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_restart_dupli"
        "cate_restarts.lines.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040153 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.end_restart_dup"
        "licate_restarts.lines.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040154 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.beg"
        "in_restart.lines.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040215 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_re"
        "start.lines.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040216 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_"
        "restart.lines.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040217 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart"
        "_duplicate_restarts.lines.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040278 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_dupl"
        "icate_restarts.lines.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040279 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_du"
        "plicate_restarts.lines.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040280 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_res"
        "tart_end_restart.lines.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040341 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_"
        "end_restart.lines.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040342 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restar"
        "t_end_restart.lines.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040343 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_end_r"
        "estart_duplicate_restarts.lines.unsigned_byte.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040404 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restar"
        "t_duplicate_restarts.lines.unsigned_byte.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040405 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.primitive_restart.begin_restart_end_rest"
        "art_duplicate_restarts.lines.unsigned_byte.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040406 end";
}
