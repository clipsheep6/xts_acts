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
#include "../ActsDeqpgles30025TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filt"
        "ering.cube.no_edges_visible.nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024325 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filt"
        "ering.cube.no_edges_visible.linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024326 end";
}
