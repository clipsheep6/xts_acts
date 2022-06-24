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

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sam"
        "ple_mask.discard_half_per_sample.default_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003060 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.samp"
        "le_mask.discard_half_per_sample.singlesample_texture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003061 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.samp"
        "le_mask.discard_half_per_sample.multisample_texture_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003062 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.samp"
        "le_mask.discard_half_per_sample.multisample_texture_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003063 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.samp"
        "le_mask.discard_half_per_sample.multisample_texture_4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003064 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.samp"
        "le_mask.discard_half_per_sample.multisample_texture_8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003065 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sampl"
        "e_mask.discard_half_per_sample.multisample_texture_16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003066 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sa"
        "mple_mask.discard_half_per_sample.singlesample_rbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003067 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sa"
        "mple_mask.discard_half_per_sample.multisample_rbo_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003068 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sa"
        "mple_mask.discard_half_per_sample.multisample_rbo_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003069 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sa"
        "mple_mask.discard_half_per_sample.multisample_rbo_4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003070 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sa"
        "mple_mask.discard_half_per_sample.multisample_rbo_8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003071 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables.sam"
        "ple_mask.discard_half_per_sample.multisample_rbo_16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003072 end";
}
