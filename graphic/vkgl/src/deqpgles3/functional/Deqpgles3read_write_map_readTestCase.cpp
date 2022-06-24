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

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.ma"
        "p.read_write.map_read.array_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000545 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map."
        "read_write.map_read.array_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000546 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map."
        "read_write.map_read.copy_read_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000547 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.re"
        "ad_write.map_read.copy_read_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000548 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.r"
        "ead_write.map_read.copy_write_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000549 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.re"
        "ad_write.map_read.copy_write_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000550 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.re"
        "ad_write.map_read.element_array_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000551 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.read"
        "_write.map_read.element_array_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000552 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.r"
        "ead_write.map_read.pixel_pack_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000553 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.re"
        "ad_write.map_read.pixel_pack_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000554 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.re"
        "ad_write.map_read.pixel_unpack_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000555 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.rea"
        "d_write.map_read.pixel_unpack_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000556 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.read_"
        "write.map_read.transform_feedback_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000557 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.read_w"
        "rite.map_read.transform_feedback_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000558 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map"
        ".read_write.map_read.uniform_full",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000559 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.buffer.map.r"
        "ead_write.map_read.uniform_partial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000560 end";
}
