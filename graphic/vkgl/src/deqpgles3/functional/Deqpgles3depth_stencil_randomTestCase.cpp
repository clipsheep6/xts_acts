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
#include "../ActsDeqpgles30029TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragme"
        "nt_ops.depth_stencil.random.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028289 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragme"
        "nt_ops.depth_stencil.random.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028290 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragme"
        "nt_ops.depth_stencil.random.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028291 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragme"
        "nt_ops.depth_stencil.random.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028292 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragme"
        "nt_ops.depth_stencil.random.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028293 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragme"
        "nt_ops.depth_stencil.random.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028294 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragme"
        "nt_ops.depth_stencil.random.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028295 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragme"
        "nt_ops.depth_stencil.random.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028296 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragme"
        "nt_ops.depth_stencil.random.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028297 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragme"
        "nt_ops.depth_stencil.random.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028298 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028299 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028300 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028301 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028302 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028303 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028304 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028305 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028306 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028307 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028308 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028309 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028310 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028311 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028312 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth_stencil.random.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028313 end";
}
