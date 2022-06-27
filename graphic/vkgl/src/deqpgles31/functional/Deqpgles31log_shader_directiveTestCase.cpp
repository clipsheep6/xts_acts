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
#include "../ActsDeqpgles310020TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.log.shader_directive.primitive_bounding_box",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019295 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.log.shader_directive.blend_equation_advanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019296 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader_directive.sample_variables",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019297 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.log.shader_directive.shader_image_atomic",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019298 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.log"
        ".shader_directive.shader_multisample_interpolation",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019299 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.log.s"
        "hader_directive.texture_storage_multisample_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019300 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader_directive.geometry_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019301 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_co"
        "verage.log.shader_directive.gpu_shader_5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019302 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.log.shader_directive.shader_io_blocks",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019303 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.log.shader_directive.tessellation_shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019304 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.log.shader_directive.texture_buffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019305 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.log.shader_directive.texture_cube_map_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019306 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage."
        "log.shader_directive.accessing_bounding_box_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019307 end";
}
