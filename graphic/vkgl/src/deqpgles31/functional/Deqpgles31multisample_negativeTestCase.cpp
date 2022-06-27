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

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.multisample.neg"
        "ative.fbo_attach_different_sample_count_tex_tex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013049 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.multisample.neg"
        "ative.fbo_attach_different_sample_count_tex_rbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013050 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.multisample.neg"
        "ative.fbo_attach_different_fixed_state_tex_tex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013051 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.multisample.neg"
        "ative.fbo_attach_different_fixed_state_tex_rbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013052 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.multisa"
        "mple.negative.fbo_attach_non_zero_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013053 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.mult"
        "isample.negative.texture_min_filter",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013054 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.mult"
        "isample.negative.texture_mag_filter",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013055 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.mu"
        "ltisample.negative.texture_wrap_s",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013056 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.mu"
        "ltisample.negative.texture_wrap_t",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013057 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.mu"
        "ltisample.negative.texture_wrap_r",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013058 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.mu"
        "ltisample.negative.texture_min_lod",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013059 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.mu"
        "ltisample.negative.texture_max_lod",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013060 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.multi"
        "sample.negative.texture_compare_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013061 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.multi"
        "sample.negative.texture_compare_func",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013062 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.mult"
        "isample.negative.texture_base_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013063 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.multisa"
        "mple.negative.texture_high_sample_count",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013064 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.multisa"
        "mple.negative.texture_zero_sample_count",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013065 end";
}
