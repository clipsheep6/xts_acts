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
#include "../ActsDeqpgles30044TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.texture.texture_2d_is_texture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043030 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_2d_texture_swizzle_r_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043031 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_2d_texture_swizzle_r_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043032 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_2d_texture_swizzle_g_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043033 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_2d_texture_swizzle_g_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043034 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_2d_texture_swizzle_b_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043035 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_2d_texture_swizzle_b_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043036 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_2d_texture_swizzle_a_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043037 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_2d_texture_swizzle_a_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043038 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_2d_texture_wrap_s_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043039 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_2d_texture_wrap_s_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043040 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_2d_texture_wrap_t_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043041 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_2d_texture_wrap_t_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043042 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.te"
        "xture_2d_texture_mag_filter_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043043 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.te"
        "xture_2d_texture_mag_filter_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043044 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.te"
        "xture_2d_texture_min_filter_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043045 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.te"
        "xture_2d_texture_min_filter_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043046 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_2d_texture_min_lod_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043047 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_2d_texture_min_lod_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043048 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_2d_texture_max_lod_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043049 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_2d_texture_max_lod_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043050 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.te"
        "xture_2d_texture_base_level_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043051 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.te"
        "xture_2d_texture_base_level_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043052 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_2d_texture_max_level_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043053 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_2d_texture_max_level_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043054 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_2d_texture_compare_mode_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043055 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_2d_texture_compare_mode_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043056 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_2d_texture_compare_func_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043057 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_2d_texture_compare_func_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043058 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_2d_texture_immutable_levels_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043059 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_2d_texture_immutable_levels_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043060 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_2d_texture_immutable_format_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043061 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_2d_texture_immutable_format_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043062 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.texture.texture_3d_is_texture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043063 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_3d_texture_swizzle_r_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043064 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_3d_texture_swizzle_r_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043065 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_3d_texture_swizzle_g_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043066 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_3d_texture_swizzle_g_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043067 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_3d_texture_swizzle_b_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043068 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_3d_texture_swizzle_b_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043069 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_3d_texture_swizzle_a_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043070 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_3d_texture_swizzle_a_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043071 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_3d_texture_wrap_s_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043072 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_3d_texture_wrap_s_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043073 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_3d_texture_wrap_t_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043074 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_3d_texture_wrap_t_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043075 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_3d_texture_wrap_r_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043076 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_3d_texture_wrap_r_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043077 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.te"
        "xture_3d_texture_mag_filter_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043078 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.te"
        "xture_3d_texture_mag_filter_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043079 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.te"
        "xture_3d_texture_min_filter_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043080 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.te"
        "xture_3d_texture_min_filter_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043081 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_3d_texture_min_lod_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043082 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_3d_texture_min_lod_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043083 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_3d_texture_max_lod_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043084 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture."
        "texture_3d_texture_max_lod_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043085 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.te"
        "xture_3d_texture_base_level_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043086 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.te"
        "xture_3d_texture_base_level_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043087 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_3d_texture_max_level_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043088 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.t"
        "exture_3d_texture_max_level_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043089 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_3d_texture_compare_mode_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043090 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_3d_texture_compare_mode_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043091 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_3d_texture_compare_func_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043092 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_3d_texture_compare_func_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043093 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_3d_texture_immutable_levels_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043094 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_3d_texture_immutable_levels_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043095 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_3d_texture_immutable_format_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043096 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043097, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043097 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_3d_texture_immutable_format_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043097 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043097 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "texture.texture_2d_array_is_texture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043098 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043099, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043099 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_2d_array_texture_swizzle_r_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043099 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043099 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043100, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043100 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_2d_array_texture_swizzle_r_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043100 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043100 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_2d_array_texture_swizzle_g_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043101 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_2d_array_texture_swizzle_g_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043102 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_2d_array_texture_swizzle_b_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043103 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_2d_array_texture_swizzle_b_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043104 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_2d_array_texture_swizzle_a_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043105 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_2d_array_texture_swizzle_a_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043106 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_2d_array_texture_wrap_s_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043107 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_2d_array_texture_wrap_s_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043108 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_2d_array_texture_wrap_t_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043109 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_2d_array_texture_wrap_t_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043110 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_2d_array_texture_mag_filter_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043111 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_2d_array_texture_mag_filter_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043112 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043113, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043113 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_2d_array_texture_min_filter_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043113 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043113 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043114, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043114 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_2d_array_texture_min_filter_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043114 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043114 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043115, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043115 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_2d_array_texture_min_lod_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043115 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043115 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043116, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043116 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_2d_array_texture_min_lod_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043116 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043116 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043117, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043117 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_2d_array_texture_max_lod_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043117 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043117 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043118, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043118 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_2d_array_texture_max_lod_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043118 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043118 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043119, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043119 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_2d_array_texture_base_level_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043119 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043119 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043120, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043120 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_2d_array_texture_base_level_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043120 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043120 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043121, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043121 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_2d_array_texture_max_level_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043121 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043121 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043122, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043122 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_2d_array_texture_max_level_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043122 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043122 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043123, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043123 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textur"
        "e_2d_array_texture_compare_mode_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043123 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043123 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043124, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043124 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textur"
        "e_2d_array_texture_compare_mode_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043124 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043124 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textur"
        "e_2d_array_texture_compare_func_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043125 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textur"
        "e_2d_array_texture_compare_func_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043126 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.texture_"
        "2d_array_texture_immutable_levels_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043127 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.texture_"
        "2d_array_texture_immutable_levels_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043128 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.texture_"
        "2d_array_texture_immutable_format_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043129 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.texture_"
        "2d_array_texture_immutable_format_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043130 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "texture.texture_cube_map_is_texture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043131 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_cube_map_texture_swizzle_r_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043132 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_cube_map_texture_swizzle_r_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043133 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_cube_map_texture_swizzle_g_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043134 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_cube_map_texture_swizzle_g_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043135 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_cube_map_texture_swizzle_b_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043136 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_cube_map_texture_swizzle_b_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043137 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_cube_map_texture_swizzle_a_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043138 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_cube_map_texture_swizzle_a_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043139 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_cube_map_texture_wrap_s_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043140 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_cube_map_texture_wrap_s_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043141 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_cube_map_texture_wrap_t_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043142 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_cube_map_texture_wrap_t_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043143 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_cube_map_texture_mag_filter_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043144 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_cube_map_texture_mag_filter_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043145 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_cube_map_texture_min_filter_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043146 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_cube_map_texture_min_filter_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043147 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_cube_map_texture_min_lod_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043148 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_cube_map_texture_min_lod_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043149 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_cube_map_texture_max_lod_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043150 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.tex"
        "ture_cube_map_texture_max_lod_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043151 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_cube_map_texture_base_level_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043152 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textu"
        "re_cube_map_texture_base_level_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043153 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_cube_map_texture_max_level_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043154 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.text"
        "ure_cube_map_texture_max_level_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043155 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textur"
        "e_cube_map_texture_compare_mode_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043156 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textur"
        "e_cube_map_texture_compare_mode_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043157 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textur"
        "e_cube_map_texture_compare_func_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043158 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.textur"
        "e_cube_map_texture_compare_func_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043159 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.texture_"
        "cube_map_texture_immutable_levels_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043160 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.texture_"
        "cube_map_texture_immutable_levels_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043161 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.texture_"
        "cube_map_texture_immutable_format_gettexparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043162 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.texture.texture_"
        "cube_map_texture_immutable_format_gettexparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043163 end";
}
