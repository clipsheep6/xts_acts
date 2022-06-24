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

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.nearest_nearest_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024639 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024640 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024641 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024642 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024643 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024644 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024645 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024646 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024647 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024648 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024649 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024650 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024651 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.com"
        "binations.nearest_nearest_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024652 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.com"
        "binations.nearest_nearest_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024653 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024654 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.com"
        "binations.nearest_nearest_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024655 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.com"
        "binations.nearest_nearest_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024656 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024657 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024658 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024659 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024660 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.com"
        "binations.nearest_nearest_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024661 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.com"
        "binations.nearest_nearest_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024662 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_nearest_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024663 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.com"
        "binations.nearest_nearest_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024664 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.com"
        "binations.nearest_nearest_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024665 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.nearest_linear_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024666 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.nearest_linear_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024667 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.nearest_linear_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024668 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.nearest_linear_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024669 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024670 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024671 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.nearest_linear_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024672 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024673 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024674 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.nearest_linear_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024675 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024676 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024677 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024678 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024679 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024680 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024681 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024682 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024683 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.nearest_linear_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024684 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024685 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024686 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024687 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024688 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024689 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024690 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024691 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.nearest_linear_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024692 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_nearest_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024693 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_nearest_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024694 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_nearest_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024695 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_nearest_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024696 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024697 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024698 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_nearest_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024699 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024700 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024701 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_nearest_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024702 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024703 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024704 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024705 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024706 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024707 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024708 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024709 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024710 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_nearest_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024711 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024712 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024713 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024714 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024715 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024716 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024717 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024718 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_nearest_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024719 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d."
        "combinations.linear_linear_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024720 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024721 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024722 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024723 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024724 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024725 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024726 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024727 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024728 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024729 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024730 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024731 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024732 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_linear_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024733 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_linear_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024734 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024735 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_linear_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024736 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_linear_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024737 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024738 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024739 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024740 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024741 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_linear_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024742 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_linear_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024743 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.c"
        "ombinations.linear_linear_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024744 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_linear_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024745 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.co"
        "mbinations.linear_linear_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024746 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_nearest_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024747 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_nearest_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024748 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_nearest_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024749 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_nearest_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024750 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024751 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024752 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_nearest_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024753 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024754 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024755 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_nearest_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024756 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024757 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024758 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024759 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024760 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024761 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024762 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024763 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024764 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_nearest_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024765 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024766 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024767 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024768 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024769 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024770 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024771 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024772 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_nearest_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024773 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.nearest_mipmap_nearest_linear_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024774 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024775 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024776 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024777 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024778 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024779 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024780 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024781 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024782 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024783 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024784 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024785 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024786 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_linear_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024787 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_linear_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024788 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024789 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_linear_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024790 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_linear_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024791 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024792 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024793 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024794 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024795 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_linear_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024796 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_linear_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024797 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_nearest_linear_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024798 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_linear_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024799 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_nearest_linear_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024800 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_nearest_nearest_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024801 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024802 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024803 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024804 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024805 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024806 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024807 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024808 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024809 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024810 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024811 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024812 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024813 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.linear_mipmap_nearest_nearest_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024814 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.linear_mipmap_nearest_nearest_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024815 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024816 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.linear_mipmap_nearest_nearest_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024817 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.linear_mipmap_nearest_nearest_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024818 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024819 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024820 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024821 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024822 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.linear_mipmap_nearest_nearest_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024823 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.linear_mipmap_nearest_nearest_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024824 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_nearest_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024825 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.linear_mipmap_nearest_nearest_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024826 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.linear_mipmap_nearest_nearest_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024827 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_nearest_linear_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024828 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_nearest_linear_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024829 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_nearest_linear_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024830 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_nearest_linear_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024831 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024832 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024833 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_nearest_linear_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024834 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024835 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024836 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_nearest_linear_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024837 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024838 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024839 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024840 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024841 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024842 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024843 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024844 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024845 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_nearest_linear_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024846 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024847 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024848 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024849 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024850 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024851 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024852 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024853 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_nearest_linear_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024854 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.nearest_mipmap_linear_nearest_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024855 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024856 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024857 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024858 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024859 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024860 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024861 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024862 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024863 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024864 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024865 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024866 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024867 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_linear_nearest_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024868 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_linear_nearest_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024869 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024870 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_linear_nearest_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024871 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_linear_nearest_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024872 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024873 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024874 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024875 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024876 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_linear_nearest_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024877 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_linear_nearest_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024878 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_nearest_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024879 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_linear_nearest_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024880 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
        "ns.nearest_mipmap_linear_nearest_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024881 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.nearest_mipmap_linear_linear_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024882 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.nearest_mipmap_linear_linear_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024883 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.nearest_mipmap_linear_linear_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024884 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.nearest_mipmap_linear_linear_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024885 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024886 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024887 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.nearest_mipmap_linear_linear_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024888 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024889 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024890 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.nearest_mipmap_linear_linear_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024891 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024892 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024893 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024894 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024895 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024896 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024897 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024898 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024899 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.nearest_mipmap_linear_linear_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024900 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024901 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024902 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024903 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024904 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024905 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024906 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024907 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.nearest_mipmap_linear_linear_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024908 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_nearest_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024909 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_nearest_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024910 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_nearest_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024911 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_nearest_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024912 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024913 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024914 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_nearest_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024915 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024916 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024917 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_nearest_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024918 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024919 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024920 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024921 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024922 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024923 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024924 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024925 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024926 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_nearest_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024927 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024928 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024929 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024930 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024931 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024932 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024933 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024934 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_nearest_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024935 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combina"
        "tions.linear_mipmap_linear_linear_clamp_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024936 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_clamp_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024937 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_clamp_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024938 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_clamp_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024939 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_clamp_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024940 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_clamp_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024941 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_clamp_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024942 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_clamp_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024943 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_clamp_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024944 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_repeat_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024945 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_repeat_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024946 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_repeat_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024947 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_repeat_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024948 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_linear_repeat_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024949 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_linear_repeat_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024950 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_repeat_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024951 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_linear_repeat_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024952 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_linear_repeat_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024953 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_mirror_clamp_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024954 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_mirror_clamp_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024955 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_mirror_clamp_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024956 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_mirror_repeat_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024957 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_linear_mirror_repeat_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024958 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_linear_mirror_repeat_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024959 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinat"
        "ions.linear_mipmap_linear_linear_mirror_mirror_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024960 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_linear_mirror_mirror_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024961 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering.3d.combinati"
        "ons.linear_mipmap_linear_linear_mirror_mirror_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024962 end";
}
