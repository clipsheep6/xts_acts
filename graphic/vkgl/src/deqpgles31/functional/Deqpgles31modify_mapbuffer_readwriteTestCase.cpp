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
#include "../ActsDeqpgles310015TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buffe"
        "r.modify.mapbuffer_readwrite.buffer_size_512",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014098 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014099, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014099 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buffe"
        "r.modify.mapbuffer_readwrite.buffer_size_513",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014099 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014099 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014100, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014100 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buffer"
        ".modify.mapbuffer_readwrite.buffer_size_65536",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014100 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014100 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buffer"
        ".modify.mapbuffer_readwrite.buffer_size_65537",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014101 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buffer"
        ".modify.mapbuffer_readwrite.buffer_size_131071",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014102 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buff"
        "er.modify.mapbuffer_readwrite.range_size_512",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014103 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buff"
        "er.modify.mapbuffer_readwrite.range_size_513",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014104 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buffe"
        "r.modify.mapbuffer_readwrite.range_size_65537",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014105 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buffe"
        "r.modify.mapbuffer_readwrite.range_size_98304",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014106 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buffer."
        "modify.mapbuffer_readwrite.offset_1_alignments",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014107 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.texture_buffer."
        "modify.mapbuffer_readwrite.offset_7_alignments",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014108 end";
}
