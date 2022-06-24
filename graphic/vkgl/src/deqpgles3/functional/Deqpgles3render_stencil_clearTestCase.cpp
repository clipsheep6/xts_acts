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
#include "../ActsDeqpgles30032TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.stencil_cle"
        "ar.tex2d_rgba8_stencil_rbo_depth32f_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031426 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.stencil_cl"
        "ear.tex2d_rgba8_stencil_rbo_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031427 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.stencil_c"
        "lear.tex2d_rgba8_stencil_rbo_stencil_index8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031428 end";
}
