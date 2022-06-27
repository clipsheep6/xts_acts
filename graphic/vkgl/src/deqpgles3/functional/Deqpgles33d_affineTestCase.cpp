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
#include "../ActsDeqpgles30026TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.3d.affine.nearest_nearest_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025153 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.3d.affine.nearest_nearest_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025154 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.3d.affine.nearest_nearest_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025155 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.3d.affine.linear_nearest_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025156 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.3d.affine.linear_nearest_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025157 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.3d.affine.linear_nearest_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025158 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.3d.affine.nearest_linear_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025159 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.3d.affine.nearest_linear_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025160 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.3d.affine.nearest_linear_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025161 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.3d.affine.linear_linear_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025162 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.3d.affine.linear_linear_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025163 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.3d.affine.linear_linear_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025164 end";
}
