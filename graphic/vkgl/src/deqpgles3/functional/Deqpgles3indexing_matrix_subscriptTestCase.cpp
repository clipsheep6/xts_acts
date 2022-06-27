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

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_"
        "subscript.mat2_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006391 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat2_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006392 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_"
        "subscript.mat2_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006393 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat2_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006394 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat2_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006395 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006396 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006397 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006398 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_"
        "subscript.mat2_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006399 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat2_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006400 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat2_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006401 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat2_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006402 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006403 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006404 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006405 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006406 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat2_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006407 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006408 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006409 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006410 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006411 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat2_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006412 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006413 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat2_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006414 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006415 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006416 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006417 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006418 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006419 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat2_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006420 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat2_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006421 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat2_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006422 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat2x3_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006423 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat2x3_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006424 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat2x3_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006425 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat2x3_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006426 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2x3_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006427 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x3_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006428 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x3_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006429 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2x3_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006430 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat2x3_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006431 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat2x3_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006432 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat2x3_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006433 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2x3_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006434 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x3_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006435 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2x3_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006436 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x3_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006437 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2x3_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006438 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2x3_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006439 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x3_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006440 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x3_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006441 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2x3_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006442 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat2x3_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006443 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat2x3_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006444 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat2x3_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006445 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat2x3_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006446 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x3_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006447 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2x3_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006448 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x3_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006449 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2x3_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006450 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat2x3_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006451 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat2x3_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006452 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat2x3_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006453 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscrip"
        "t.mat2x3_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006454 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat2x4_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006455 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat2x4_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006456 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat2x4_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006457 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat2x4_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006458 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2x4_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006459 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x4_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006460 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x4_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006461 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2x4_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006462 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat2x4_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006463 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat2x4_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006464 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat2x4_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006465 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2x4_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006466 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x4_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006467 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2x4_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006468 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x4_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006469 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2x4_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006470 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat2x4_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006471 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x4_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006472 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x4_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006473 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2x4_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006474 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat2x4_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006475 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat2x4_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006476 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat2x4_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006477 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat2x4_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006478 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x4_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006479 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2x4_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006480 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat2x4_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006481 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat2x4_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006482 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat2x4_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006483 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat2x4_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006484 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat2x4_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006485 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscrip"
        "t.mat2x4_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006486 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat3x2_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006487 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat3x2_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006488 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat3x2_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006489 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat3x2_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006490 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3x2_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006491 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x2_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006492 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x2_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006493 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3x2_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006494 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat3x2_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006495 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat3x2_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006496 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat3x2_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006497 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3x2_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006498 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x2_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006499 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3x2_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006500 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x2_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006501 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3x2_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006502 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3x2_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006503 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x2_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006504 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x2_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006505 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3x2_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006506 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat3x2_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006507 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat3x2_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006508 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat3x2_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006509 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat3x2_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006510 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x2_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006511 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3x2_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006512 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x2_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006513 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3x2_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006514 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat3x2_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006515 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat3x2_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006516 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat3x2_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006517 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscrip"
        "t.mat3x2_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006518 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_"
        "subscript.mat3_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006519 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat3_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006520 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_"
        "subscript.mat3_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006521 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat3_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006522 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat3_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006523 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006524 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006525 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006526 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_"
        "subscript.mat3_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006527 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat3_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006528 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat3_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006529 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat3_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006530 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006531 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006532 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006533 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006534 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat3_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006535 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006536 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006537 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006538 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006539 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat3_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006540 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006541 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat3_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006542 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006543 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006544 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006545 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006546 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006547 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat3_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006548 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat3_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006549 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat3_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006550 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat3x4_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006551 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat3x4_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006552 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat3x4_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006553 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat3x4_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006554 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3x4_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006555 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x4_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006556 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x4_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006557 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3x4_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006558 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat3x4_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006559 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat3x4_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006560 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat3x4_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006561 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3x4_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006562 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x4_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006563 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3x4_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006564 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x4_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006565 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3x4_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006566 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat3x4_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006567 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x4_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006568 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x4_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006569 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3x4_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006570 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat3x4_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006571 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat3x4_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006572 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat3x4_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006573 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat3x4_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006574 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x4_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006575 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3x4_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006576 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat3x4_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006577 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat3x4_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006578 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat3x4_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006579 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat3x4_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006580 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat3x4_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006581 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscrip"
        "t.mat3x4_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006582 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat4x2_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006583 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat4x2_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006584 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat4x2_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006585 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat4x2_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006586 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4x2_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006587 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x2_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006588 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x2_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006589 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4x2_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006590 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat4x2_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006591 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat4x2_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006592 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat4x2_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006593 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4x2_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006594 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x2_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006595 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4x2_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006596 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x2_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006597 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4x2_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006598 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4x2_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006599 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x2_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006600 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x2_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006601 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4x2_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006602 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat4x2_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006603 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat4x2_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006604 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat4x2_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006605 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat4x2_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006606 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x2_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006607 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4x2_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006608 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x2_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006609 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4x2_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006610 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat4x2_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006611 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat4x2_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006612 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat4x2_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006613 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscrip"
        "t.mat4x2_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006614 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat4x3_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006615 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat4x3_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006616 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat4x3_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006617 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat4x3_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006618 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4x3_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006619 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x3_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006620 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x3_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006621 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4x3_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006622 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat4x3_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006623 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat4x3_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006624 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat4x3_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006625 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4x3_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006626 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x3_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006627 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4x3_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006628 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x3_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006629 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4x3_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006630 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4x3_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006631 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x3_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006632 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x3_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006633 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4x3_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006634 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat4x3_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006635 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat4x3_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006636 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat4x3_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006637 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat4x3_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006638 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x3_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006639 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4x3_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006640 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4x3_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006641 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4x3_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006642 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat4x3_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006643 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat4x3_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006644 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat4x3_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006645 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscrip"
        "t.mat4x3_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006646 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_"
        "subscript.mat4_static_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006647 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat4_static_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006648 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_"
        "subscript.mat4_static_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006649 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat4_static_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006650 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat4_static_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006651 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4_static_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006652 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4_static_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006653 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4_static_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006654 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_"
        "subscript.mat4_dynamic_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006655 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat4_dynamic_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006656 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_s"
        "ubscript.mat4_dynamic_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006657 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat4_dynamic_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006658 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4_dynamic_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006659 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4_dynamic_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006660 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4_dynamic_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006661 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4_dynamic_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006662 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_su"
        "bscript.mat4_static_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006663 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4_static_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006664 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4_static_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006665 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4_static_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006666 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4_static_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006667 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat4_static_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006668 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4_static_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006669 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat4_static_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006670 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4_dynamic_loop_write_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006671 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4_dynamic_loop_write_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006672 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
        "script.mat4_dynamic_loop_write_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006673 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
        "cript.mat4_dynamic_loop_write_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006674 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
        "ript.mat4_dynamic_loop_write_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006675 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat4_dynamic_loop_write_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006676 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
        "ipt.mat4_dynamic_loop_write_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006677 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
        "pt.mat4_dynamic_loop_write_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006678 end";
}
