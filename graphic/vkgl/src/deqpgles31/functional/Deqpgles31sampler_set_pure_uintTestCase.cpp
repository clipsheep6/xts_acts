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
#include "../ActsDeqpgles310016TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query."
        "sampler.set_pure_uint.texture_wrap_s",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015963 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query."
        "sampler.set_pure_uint.texture_wrap_t",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015964 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query."
        "sampler.set_pure_uint.texture_wrap_r",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015965 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.sa"
        "mpler.set_pure_uint.texture_mag_filter",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015966 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.sa"
        "mpler.set_pure_uint.texture_min_filter",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015967 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.s"
        "ampler.set_pure_uint.texture_min_lod",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015968 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.s"
        "ampler.set_pure_uint.texture_max_lod",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015969 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.sam"
        "pler.set_pure_uint.texture_compare_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015970 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.sam"
        "pler.set_pure_uint.texture_compare_func",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015971 end";
}

static HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.sam"
        "pler.set_pure_uint.texture_srgb_decode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015972 end";
}
