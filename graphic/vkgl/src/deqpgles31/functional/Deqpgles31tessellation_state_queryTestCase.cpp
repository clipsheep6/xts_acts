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
#include "../ActsDeqpgles310008TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellati"
        "on.state_query.max_patch_vertices",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007926 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellati"
        "on.state_query.max_tess_gen_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007927 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state"
        "_query.max_tess_control_uniform_components",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007928 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_q"
        "uery.max_tess_evaluation_uniform_components",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007929 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_"
        "query.max_tess_control_texture_image_units",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007930 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_q"
        "uery.max_tess_evaluation_texture_image_units",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007931 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state"
        "_query.max_tess_control_output_components",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007932 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation."
        "state_query.max_tess_patch_components",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007933 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_qu"
        "ery.max_tess_control_total_output_components",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007934 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_"
        "query.max_tess_evaluation_output_components",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007935 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.sta"
        "te_query.max_tess_control_uniform_blocks",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007936 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state"
        "_query.max_tess_evaluation_uniform_blocks",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007937 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.stat"
        "e_query.max_tess_control_input_components",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007938 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_"
        "query.max_tess_evaluation_input_components",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007939 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_q"
        "uery.max_tess_control_atomic_counter_buffers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007940 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_que"
        "ry.max_tess_evaluation_atomic_counter_buffers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007941 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.stat"
        "e_query.max_tess_control_atomic_counters",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007942 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state"
        "_query.max_tess_evaluation_atomic_counters",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007943 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.sta"
        "te_query.max_tess_control_image_uniforms",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007944 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state"
        "_query.max_tess_evaluation_image_uniforms",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007945 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_q"
        "uery.max_tess_control_shader_storage_blocks",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007946 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_qu"
        "ery.max_tess_evaluation_shader_storage_blocks",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007947 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.s"
        "tate_query.max_uniform_buffer_bindings",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007948 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.s"
        "tate_query.max_combined_uniform_blocks",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007949 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.stat"
        "e_query.max_combined_texture_image_units",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007950 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_quer"
        "y.max_combined_tess_control_uniform_components",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007951 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_query"
        ".max_combined_tess_evaluation_uniform_components",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007952 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_q"
        "uery.primitive_restart_for_patches_supported",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007953 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessella"
        "tion.state_query.patch_vertices",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007954 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.st"
        "ate_query.tess_control_output_vertices",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007955 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessell"
        "ation.state_query.tess_gen_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007956 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellat"
        "ion.state_query.tess_gen_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007957 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellatio"
        "n.state_query.tess_gen_vertex_order",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007958 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellati"
        "on.state_query.tess_gen_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007959 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.stat"
        "e_query.referenced_by_tess_control_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007960 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.state_"
        "query.referenced_by_tess_evaluation_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007961 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessell"
        "ation.state_query.is_per_patch",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007962 end";
}
