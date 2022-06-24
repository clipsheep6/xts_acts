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

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.get_error.compute.program_not_active",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019825 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.get_error.compute.invalid_program_query",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019826 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.ge"
        "t_error.compute.invalid_dispatch_compute_indirect",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019827 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.ge"
        "t_error.compute.invalid_maximum_work_group_counts",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019828 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.g"
        "et_error.compute.invalid_maximum_work_group_sizes",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019829 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.get_error.compute.invalid_layout_qualifiers",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019830 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.g"
        "et_error.compute.invalid_write_built_in_constants",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019831 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.get_error.compute.exceed_uniform_block_limit",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019832 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.ge"
        "t_error.compute.exceed_shader_storage_block_limit",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019833 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.g"
        "et_error.compute.exceed_texture_image_units_limit",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019834 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage"
        ".get_error.compute.exceed_image_uniforms_limit",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019835 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.g"
        "et_error.compute.exceed_shared_memory_size_limit",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019836 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.g"
        "et_error.compute.exceed_uniform_components_limit",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019837 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.ge"
        "t_error.compute.exceed_atomic_counter_buffer_limit",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019838 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage"
        ".get_error.compute.exceed_atomic_counters_limit",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019839 end";
}
