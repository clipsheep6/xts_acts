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
#include "../ActsDeqpgles310019TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negat"
        "ive_coverage.log.buffer.bind_buffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018851 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negativ"
        "e_coverage.log.buffer.delete_buffers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018852 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negat"
        "ive_coverage.log.buffer.gen_buffers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018853 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negat"
        "ive_coverage.log.buffer.buffer_data",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018854 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negativ"
        "e_coverage.log.buffer.buffer_sub_data",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018855 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.buffer.buffer_sub_data_size_offset",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018856 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.ne"
        "gative_coverage.log.buffer.clear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018857 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negat"
        "ive_coverage.log.buffer.read_pixels",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018858 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negati"
        "ve_coverage.log.buffer.readn_pixels",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018859 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.buffer.read_pixels_format_mismatch",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018860 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.log.buffer.read_pixels_fbo_format_mismatch",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018861 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative"
        "_coverage.log.buffer.bind_buffer_range",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018862 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative"
        "_coverage.log.buffer.bind_buffer_base",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018863 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negativ"
        "e_coverage.log.buffer.clear_bufferiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018864 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negativ"
        "e_coverage.log.buffer.clear_bufferuiv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018865 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negativ"
        "e_coverage.log.buffer.clear_bufferfv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018866 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negativ"
        "e_coverage.log.buffer.clear_bufferfi",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018867 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_c"
        "overage.log.buffer.copy_buffer_sub_data",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018868 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negati"
        "ve_coverage.log.buffer.draw_buffers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018869 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.buffer.flush_mapped_buffer_range",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018870 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative"
        "_coverage.log.buffer.map_buffer_range",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018871 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negat"
        "ive_coverage.log.buffer.read_buffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018872 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negati"
        "ve_coverage.log.buffer.unmap_buffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018873 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative"
        "_coverage.log.buffer.bind_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018874 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative"
        "_coverage.log.buffer.bind_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018875 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.buffer.check_framebuffer_status",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018876 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative"
        "_coverage.log.buffer.gen_framebuffers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018877 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative"
        "_coverage.log.buffer.gen_renderbuffers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018878 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.log.buffer.delete_framebuffers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018879 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_c"
        "overage.log.buffer.delete_renderbuffers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018880 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.buffer.framebuffer_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018881 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.log.buffer.framebuffer_texture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018882 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_c"
        "overage.log.buffer.framebuffer_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018883 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_c"
        "overage.log.buffer.renderbuffer_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018884 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative"
        "_coverage.log.buffer.blit_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018885 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.log.buffer.blit_framebuffer_multisample",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018886 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.buffer.framebuffer_texture_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018887 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_co"
        "verage.log.buffer.invalidate_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018888 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.buffer.invalidate_sub_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018889 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.log.buffer.renderbuffer_storage_multisample",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018890 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_"
        "coverage.log.buffer.copy_image_sub_data",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018891 end";
}
