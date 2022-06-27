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
#include "../ActsDeqpgles310009TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.user_defined_io."
        "per_patch_block.vertex_io_array_size_query.triangles",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008273 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.user_defined_i"
        "o.per_patch_block.vertex_io_array_size_query.quads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008274 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.user_defined_io"
        ".per_patch_block.vertex_io_array_size_query.isolines",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008275 end";
}
