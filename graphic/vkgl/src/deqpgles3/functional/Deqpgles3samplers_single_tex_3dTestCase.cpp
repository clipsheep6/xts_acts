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
#include "../ActsDeqpgles30040TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.sample"
        "rs.single_tex_3d.diff_wrap_t",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039674 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.sample"
        "rs.single_tex_3d.diff_wrap_s",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039675 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.sample"
        "rs.single_tex_3d.diff_wrap_r",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039676 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.samplers"
        ".single_tex_3d.diff_min_filter",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039677 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.samplers"
        ".single_tex_3d.diff_mag_filter",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039678 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.sample"
        "rs.single_tex_3d.diff_max_lod",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039679 end";
}

static HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_039680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.sample"
        "rs.single_tex_3d.diff_min_lod",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30040TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30040TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30040TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30040TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30040TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_039680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_039680 end";
}
