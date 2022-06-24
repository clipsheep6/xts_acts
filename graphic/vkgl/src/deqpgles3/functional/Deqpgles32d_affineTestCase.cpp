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

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.affine.nearest_nearest_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024999 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.affine.nearest_nearest_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025000 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.affine.nearest_nearest_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025001 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.affine.linear_nearest_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025002 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.affine.linear_nearest_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025003 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.affine.linear_nearest_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025004 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.affine.nearest_linear_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025005 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.affine.nearest_linear_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025006 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.affine.nearest_linear_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025007 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.affine.linear_linear_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025008 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.affine.linear_linear_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025009 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.affine.linear_linear_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025010 end";
}
