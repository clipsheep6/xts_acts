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

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
        "_by_shader.vertex_tess_geo_fragment_only_vertex.block_array.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021347 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
        "_shader.vertex_tess_geo_fragment_only_vertex.block_array.float_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021348 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
        "_shader.vertex_tess_geo_fragment_only_vertex.block_array.float_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021349 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variable.re"
        "ferenced_by.vertex_tess_geo_fragment_only_vertex.block_array.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024369 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variable.refer"
        "enced_by.vertex_tess_geo_fragment_only_vertex.block_array.float_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024370 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variable.refere"
        "nced_by.vertex_tess_geo_fragment_only_vertex.block_array.float_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024371 end";
}
