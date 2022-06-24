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
#include "../ActsDeqpgles310013TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filt"
        "ering.cube_array.sizes.8x8x6_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012351 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filt"
        "ering.cube_array.sizes.8x8x6_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012352 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cu"
        "be_array.sizes.8x8x6_nearest_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012353 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.c"
        "ube_array.sizes.8x8x6_linear_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012354 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.c"
        "ube_array.sizes.8x8x6_nearest_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012355 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.c"
        "ube_array.sizes.8x8x6_linear_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012356 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filter"
        "ing.cube_array.sizes.64x64x12_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012357 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filte"
        "ring.cube_array.sizes.64x64x12_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012358 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cub"
        "e_array.sizes.64x64x12_nearest_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012359 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cub"
        "e_array.sizes.64x64x12_linear_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012360 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cub"
        "e_array.sizes.64x64x12_nearest_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012361 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cu"
        "be_array.sizes.64x64x12_linear_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012362 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filteri"
        "ng.cube_array.sizes.128x128x12_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012363 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filter"
        "ing.cube_array.sizes.128x128x12_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012364 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cube"
        "_array.sizes.128x128x12_nearest_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012365 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cube"
        "_array.sizes.128x128x12_linear_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012366 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cube"
        "_array.sizes.128x128x12_nearest_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012367 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cub"
        "e_array.sizes.128x128x12_linear_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012368 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filte"
        "ring.cube_array.sizes.7x7x12_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012369 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filt"
        "ering.cube_array.sizes.7x7x12_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012370 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cu"
        "be_array.sizes.7x7x12_nearest_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012371 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cu"
        "be_array.sizes.7x7x12_linear_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012372 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cu"
        "be_array.sizes.7x7x12_nearest_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012373 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.c"
        "ube_array.sizes.7x7x12_linear_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012374 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filter"
        "ing.cube_array.sizes.63x63x18_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012375 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filte"
        "ring.cube_array.sizes.63x63x18_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012376 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cub"
        "e_array.sizes.63x63x18_nearest_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012377 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cub"
        "e_array.sizes.63x63x18_linear_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012378 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cub"
        "e_array.sizes.63x63x18_nearest_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012379 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.filtering.cu"
        "be_array.sizes.63x63x18_linear_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012380 end";
}
