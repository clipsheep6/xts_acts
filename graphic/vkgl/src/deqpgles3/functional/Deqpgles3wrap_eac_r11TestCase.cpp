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
#include "../ActsDeqpgles30023TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.clamp_clamp_nearest_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022519 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wr"
        "ap.eac_r11.clamp_clamp_linear_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022520 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.clamp_repeat_nearest_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022521 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.clamp_repeat_linear_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022522 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.clamp_mirror_nearest_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022523 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.clamp_mirror_linear_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022524 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.repeat_clamp_nearest_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022525 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.repeat_clamp_linear_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022526 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.repeat_repeat_nearest_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022527 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.repeat_repeat_linear_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022528 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.repeat_mirror_nearest_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022529 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.repeat_mirror_linear_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022530 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.mirror_clamp_nearest_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022531 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.mirror_clamp_linear_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022532 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.mirror_repeat_nearest_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022533 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.mirror_repeat_linear_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022534 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.mirror_mirror_nearest_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022535 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.mirror_mirror_linear_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022536 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.clamp_clamp_nearest_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022537 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.clamp_clamp_linear_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022538 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.clamp_repeat_nearest_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022539 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.clamp_repeat_linear_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022540 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.clamp_mirror_nearest_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022541 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.clamp_mirror_linear_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022542 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.repeat_clamp_nearest_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022543 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.repeat_clamp_linear_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022544 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.repeat_repeat_nearest_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022545 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.repeat_repeat_linear_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022546 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.repeat_mirror_nearest_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022547 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.repeat_mirror_linear_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022548 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.mirror_clamp_nearest_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022549 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wra"
        "p.eac_r11.mirror_clamp_linear_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022550 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.mirror_repeat_nearest_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022551 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.mirror_repeat_linear_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022552 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.mirror_mirror_nearest_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022553 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap"
        ".eac_r11.mirror_mirror_linear_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022554 end";
}
