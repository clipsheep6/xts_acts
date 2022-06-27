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
#include "../ActsDeqpgles310014TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_bu"
        "ffer.render.as_index_array.buffer_size_512",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013911 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_bu"
        "ffer.render.as_index_array.buffer_size_513",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013912 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buf"
        "fer.render.as_index_array.buffer_size_65536",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013913 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buf"
        "fer.render.as_index_array.buffer_size_65537",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013914 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buff"
        "er.render.as_index_array.buffer_size_131071",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013915 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_bu"
        "ffer.render.as_index_array.range_size_512",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013916 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_bu"
        "ffer.render.as_index_array.range_size_513",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013917 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buf"
        "fer.render.as_index_array.range_size_65537",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013918 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buf"
        "fer.render.as_index_array.range_size_98304",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013919 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buff"
        "er.render.as_index_array.offset_1_alignments",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013920 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buff"
        "er.render.as_index_array.offset_7_alignments",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013921 end";
}
