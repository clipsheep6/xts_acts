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
#include "../ActsDeqpgles310012TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_lo"
        "ad_store.cube.load_store.rgba32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011386 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_stor"
        "e.cube.load_store.rgba32f_single_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011387 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_lo"
        "ad_store.cube.load_store.rgba16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011388 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_stor"
        "e.cube.load_store.rgba16f_single_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011389 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_l"
        "oad_store.cube.load_store.r32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011390 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_st"
        "ore.cube.load_store.r32f_single_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011391 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_loa"
        "d_store.cube.load_store.rgba32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011392 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_stor"
        "e.cube.load_store.rgba32ui_single_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011393 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_loa"
        "d_store.cube.load_store.rgba16ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011394 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_stor"
        "e.cube.load_store.rgba16ui_single_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011395 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_lo"
        "ad_store.cube.load_store.rgba8ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011396 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_stor"
        "e.cube.load_store.rgba8ui_single_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011397 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_l"
        "oad_store.cube.load_store.r32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011398 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_sto"
        "re.cube.load_store.r32ui_single_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011399 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_lo"
        "ad_store.cube.load_store.rgba32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011400 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_stor"
        "e.cube.load_store.rgba32i_single_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011401 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_lo"
        "ad_store.cube.load_store.rgba16i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011402 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_stor"
        "e.cube.load_store.rgba16i_single_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011403 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_lo"
        "ad_store.cube.load_store.rgba8i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011404 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_sto"
        "re.cube.load_store.rgba8i_single_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011405 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_l"
        "oad_store.cube.load_store.r32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011406 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_st"
        "ore.cube.load_store.r32i_single_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011407 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_l"
        "oad_store.cube.load_store.rgba8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011408 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_sto"
        "re.cube.load_store.rgba8_single_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011409 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load"
        "_store.cube.load_store.rgba8_snorm",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011410 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_store."
        "cube.load_store.rgba8_snorm_single_layer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011411 end";
}
