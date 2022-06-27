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
#include "../ActsDeqpgles310004TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sam"
        "ple_mask_in.bit_count_per_sample.default_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003009 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.samp"
        "le_mask_in.bit_count_per_sample.singlesample_texture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003010 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.samp"
        "le_mask_in.bit_count_per_sample.multisample_texture_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003011 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.samp"
        "le_mask_in.bit_count_per_sample.multisample_texture_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003012 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.samp"
        "le_mask_in.bit_count_per_sample.multisample_texture_4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003013 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.samp"
        "le_mask_in.bit_count_per_sample.multisample_texture_8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003014 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sampl"
        "e_mask_in.bit_count_per_sample.multisample_texture_16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003015 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sa"
        "mple_mask_in.bit_count_per_sample.singlesample_rbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003016 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sa"
        "mple_mask_in.bit_count_per_sample.multisample_rbo_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003017 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sa"
        "mple_mask_in.bit_count_per_sample.multisample_rbo_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003018 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sa"
        "mple_mask_in.bit_count_per_sample.multisample_rbo_4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003019 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sa"
        "mple_mask_in.bit_count_per_sample.multisample_rbo_8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003020 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sam"
        "ple_mask_in.bit_count_per_sample.multisample_rbo_16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003021 end";
}
