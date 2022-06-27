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
#include "../ActsDeqpgles30007TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.float_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006047 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_a"
        "rray.float_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006048 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.float_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006049 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_a"
        "rray.float_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006050 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.float_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006051 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.float_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006052 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.float_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006053 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.float_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006054 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.float_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006055 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_a"
        "rray.float_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006056 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_a"
        "rray.float_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006057 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.float_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006058 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.float_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006059 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.float_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006060 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.float_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006061 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.float_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006062 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.float_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006063 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.float_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006064 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.float_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006065 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.float_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006066 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".float_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006067 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array."
        "float_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006068 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".float_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006069 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array."
        "float_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006070 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.float_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006071 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.float_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006072 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.float_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006073 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.float_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006074 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".float_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006075 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array."
        "float_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006076 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array."
        "float_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006077 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array.f"
        "loat_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006078 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp"
        "_array.vec2_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006079 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.vec2_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006080 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.vec2_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006081 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_a"
        "rray.vec2_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006082 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec2_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006083 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec2_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006084 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec2_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006085 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec2_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006086 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.vec2_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006087 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_a"
        "rray.vec2_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006088 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.vec2_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006089 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_a"
        "rray.vec2_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006090 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec2_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006091 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec2_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006092 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec2_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006093 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.vec2_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006094 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec2_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006095 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec2_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006096 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006097, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006097 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec2_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006097 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006097 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec2_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006098 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006099, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006099 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.vec2_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006099 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006099 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006100, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006100 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".vec2_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006100 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006100 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".vec2_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006101 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array."
        "vec2_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006102 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec2_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006103 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec2_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006104 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec2_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006105 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.vec2_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006106 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".vec2_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006107 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array."
        "vec2_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006108 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".vec2_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006109 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array."
        "vec2_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006110 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp"
        "_array.vec3_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006111 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.vec3_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006112 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006113, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006113 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.vec3_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006113 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006113 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006114, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006114 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_a"
        "rray.vec3_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006114 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006114 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006115, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006115 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec3_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006115 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006115 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006116, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006116 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec3_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006116 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006116 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006117, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006117 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec3_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006117 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006117 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006118, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006118 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec3_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006118 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006118 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006119, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006119 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.vec3_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006119 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006119 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006120, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006120 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_a"
        "rray.vec3_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006120 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006120 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006121, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006121 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.vec3_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006121 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006121 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006122, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006122 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_a"
        "rray.vec3_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006122 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006122 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006123, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006123 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec3_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006123 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006123 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006124, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006124 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec3_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006124 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006124 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec3_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006125 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.vec3_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006126 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec3_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006127 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec3_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006128 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec3_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006129 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec3_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006130 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.vec3_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006131 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".vec3_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006132 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".vec3_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006133 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array."
        "vec3_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006134 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec3_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006135 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec3_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006136 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec3_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006137 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.vec3_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006138 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".vec3_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006139 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array."
        "vec3_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006140 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".vec3_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006141 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array."
        "vec3_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006142 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp"
        "_array.vec4_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006143 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.vec4_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006144 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.vec4_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006145 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_a"
        "rray.vec4_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006146 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec4_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006147 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec4_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006148 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec4_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006149 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec4_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006150 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.vec4_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006151 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_a"
        "rray.vec4_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006152 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_"
        "array.vec4_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006153 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_a"
        "rray.vec4_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006154 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec4_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006155 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec4_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006156 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec4_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006157 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.vec4_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006158 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec4_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006159 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec4_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006160 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec4_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006161 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec4_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006162 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.vec4_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006163 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".vec4_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006164 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".vec4_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006165 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array."
        "vec4_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006166 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_ar"
        "ray.vec4_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006167 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec4_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006168 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arr"
        "ay.vec4_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006169 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_arra"
        "y.vec4_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006170 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".vec4_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006171 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array."
        "vec4_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006172 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array"
        ".vec4_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006173 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.tmp_array."
        "vec4_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006174 end";
}
