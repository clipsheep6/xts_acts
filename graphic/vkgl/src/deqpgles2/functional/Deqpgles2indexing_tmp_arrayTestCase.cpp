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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20003TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.float_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002835 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.float_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002836 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.float_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002837 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.float_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002838 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.float_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002839 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.float_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002840 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.float_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002841 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.float_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002842 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.float_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002843 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.float_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002844 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.float_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002845 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.float_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002846 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.float_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002847 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.float_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002848 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.float_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002849 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.float_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002850 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.float_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002851 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.float_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002852 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.float_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002853 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.float_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002854 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".float_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002855 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array."
        "float_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002856 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".float_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002857 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array."
        "float_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002858 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.float_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002859 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.float_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002860 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.float_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002861 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.float_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002862 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".float_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002863 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array."
        "float_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002864 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array."
        "float_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002865 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array.f"
        "loat_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002866 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp"
        "_array.float_const_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002867 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.float_const_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002868 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.float_const_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002869 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.float_const_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002870 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.float_const_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002871 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.float_const_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002872 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.float_const_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002873 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.float_const_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002874 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp"
        "_array.vec2_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002875 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec2_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002876 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec2_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002877 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.vec2_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002878 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec2_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002879 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec2_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002880 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec2_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002881 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec2_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002882 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec2_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002883 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.vec2_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002884 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec2_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002885 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.vec2_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002886 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec2_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002887 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec2_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002888 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec2_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002889 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.vec2_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002890 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec2_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002891 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec2_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002892 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec2_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002893 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec2_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002894 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.vec2_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002895 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".vec2_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002896 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".vec2_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002897 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array."
        "vec2_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002898 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec2_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002899 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec2_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002900 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec2_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002901 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.vec2_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002902 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".vec2_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002903 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array."
        "vec2_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002904 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".vec2_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002905 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array."
        "vec2_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002906 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp"
        "_array.vec2_const_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002907 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec2_const_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002908 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp"
        "_array.vec2_const_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002909 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec2_const_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002910 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.vec2_const_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002911 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec2_const_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002912 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec2_const_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002913 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec2_const_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002914 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp"
        "_array.vec3_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002915 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec3_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002916 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec3_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002917 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.vec3_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002918 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec3_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002919 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec3_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002920 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec3_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002921 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec3_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002922 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec3_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002923 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.vec3_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002924 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec3_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002925 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.vec3_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002926 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec3_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002927 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec3_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002928 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec3_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002929 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.vec3_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002930 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec3_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002931 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec3_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002932 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec3_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002933 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec3_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002934 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.vec3_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002935 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".vec3_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002936 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".vec3_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002937 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array."
        "vec3_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002938 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec3_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002939 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec3_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002940 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec3_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002941 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.vec3_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002942 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".vec3_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002943 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array."
        "vec3_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002944 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".vec3_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002945 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array."
        "vec3_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002946 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp"
        "_array.vec3_const_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002947 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec3_const_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002948 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp"
        "_array.vec3_const_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002949 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec3_const_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002950 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.vec3_const_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002951 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec3_const_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002952 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec3_const_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002953 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec3_const_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002954 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp"
        "_array.vec4_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002955 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec4_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002956 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec4_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002957 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.vec4_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002958 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec4_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002959 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec4_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002960 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec4_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002961 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec4_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002962 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec4_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002963 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.vec4_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002964 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec4_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002965 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.vec4_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002966 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec4_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002967 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec4_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002968 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec4_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002969 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.vec4_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002970 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec4_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002971 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec4_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002972 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec4_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002973 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec4_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002974 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.vec4_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002975 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".vec4_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002976 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".vec4_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002977 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array."
        "vec4_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002978 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec4_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002979 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec4_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002980 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec4_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002981 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
        "y.vec4_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002982 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".vec4_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002983 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array."
        "vec4_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002984 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array"
        ".vec4_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002985 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_array."
        "vec4_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002986 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp"
        "_array.vec4_const_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002987 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec4_const_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002988 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp"
        "_array.vec4_const_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002989 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_"
        "array.vec4_const_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002990 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_a"
        "rray.vec4_const_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002991 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec4_const_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002992 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
        "ray.vec4_const_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002993 end";
}

static HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
        "ay.vec4_const_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002994 end";
}
