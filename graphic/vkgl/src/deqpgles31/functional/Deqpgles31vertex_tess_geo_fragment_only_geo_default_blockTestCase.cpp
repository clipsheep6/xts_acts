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
#include "../ActsDeqpgles310022TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.reference"
        "d_by_shader.vertex_tess_geo_fragment_only_geo.default_block.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021367 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
        "y_shader.vertex_tess_geo_fragment_only_geo.default_block.float_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021368 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
        "_shader.vertex_tess_geo_fragment_only_geo.default_block.float_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021369 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
        "_by_shader.vertex_tess_geo_fragment_only_geo.default_block.sampler",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021370 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
        "_shader.vertex_tess_geo_fragment_only_geo.default_block.sampler_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021371 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
        "shader.vertex_tess_geo_fragment_only_geo.default_block.sampler_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021372 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
        "y_shader.vertex_tess_geo_fragment_only_geo.default_block.atomic_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021373 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
        "hader.vertex_tess_geo_fragment_only_geo.default_block.atomic_uint_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021374 end";
}
