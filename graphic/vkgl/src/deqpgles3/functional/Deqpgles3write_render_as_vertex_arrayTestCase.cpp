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
#include "../ActsDeqpgles30001TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.wri"
        "te.render_as_vertex_array.array_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000385 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.writ"
        "e.render_as_vertex_array.array_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000386 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.write"
        ".render_as_vertex_array.copy_read_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000387 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.write."
        "render_as_vertex_array.copy_read_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000388 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.write"
        ".render_as_vertex_array.copy_write_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000389 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.write.r"
        "ender_as_vertex_array.copy_write_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000390 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.write.r"
        "ender_as_vertex_array.element_array_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000391 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.write.re"
        "nder_as_vertex_array.element_array_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000392 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.write"
        ".render_as_vertex_array.pixel_pack_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000393 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.write.r"
        "ender_as_vertex_array.pixel_pack_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000394 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.write."
        "render_as_vertex_array.pixel_unpack_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000395 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.write.re"
        "nder_as_vertex_array.pixel_unpack_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000396 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.write.ren"
        "der_as_vertex_array.transform_feedback_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000397 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.write.rende"
        "r_as_vertex_array.transform_feedback_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000398 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.writ"
        "e.render_as_vertex_array.uniform_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000399 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.write"
        ".render_as_vertex_array.uniform_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000400 end";
}
