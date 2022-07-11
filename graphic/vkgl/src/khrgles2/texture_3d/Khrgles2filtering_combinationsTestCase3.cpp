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

#include <gtest/gtest.h>
#include "../Khrgles2BaseFunc.h"
#include "../ActsKhrgles20001TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000270 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000271 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000272 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000273 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000274 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000275 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000276 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000277 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000278 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000279 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.nea"
        "rest_mipmap_linear_nearest_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000280 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.nea"
        "rest_mipmap_linear_nearest_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000281 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000282 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.nea"
        "rest_mipmap_linear_nearest_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000283 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.nea"
        "rest_mipmap_linear_nearest_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000284 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000285 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000286 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000287 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000288 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.nea"
        "rest_mipmap_linear_nearest_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000289 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.nea"
        "rest_mipmap_linear_nearest_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000290 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_nearest_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000291 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.nea"
        "rest_mipmap_linear_nearest_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000292 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.nea"
        "rest_mipmap_linear_nearest_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000293 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.n"
        "earest_mipmap_linear_linear_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000294 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.n"
        "earest_mipmap_linear_linear_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000295 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.n"
        "earest_mipmap_linear_linear_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000296 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.n"
        "earest_mipmap_linear_linear_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000297 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000298 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000299 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.n"
        "earest_mipmap_linear_linear_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000300 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000301 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000302 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.n"
        "earest_mipmap_linear_linear_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000303 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000304 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000305 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000306 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000307 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000308 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000309 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000310 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000311 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.n"
        "earest_mipmap_linear_linear_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000312 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000313 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000314 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000315 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000316 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000317 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000318 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000319 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.ne"
        "arest_mipmap_linear_linear_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000320 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.l"
        "inear_mipmap_linear_nearest_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000321 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.l"
        "inear_mipmap_linear_nearest_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000322 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.l"
        "inear_mipmap_linear_nearest_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000323 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.l"
        "inear_mipmap_linear_nearest_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000324 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000325 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000326 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.l"
        "inear_mipmap_linear_nearest_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000327 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000328 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000329 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.l"
        "inear_mipmap_linear_nearest_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000330 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000331 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000332 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000333 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000334 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000335 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000336 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000337 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000338 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.l"
        "inear_mipmap_linear_nearest_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000339 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000340 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000341 end";
}

static HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES2.texture_3d.filtering.combinations.li"
        "near_mipmap_linear_nearest_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles20001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles20001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles20001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles20001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles20001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000342 end";
}