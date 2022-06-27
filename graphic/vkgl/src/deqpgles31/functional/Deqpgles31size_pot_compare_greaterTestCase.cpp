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
#include "../ActsDeqpgles310014TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013119, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013119 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.2d.dep"
        "th32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013119 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013119 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013120, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013120 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.2d.dept"
        "h32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013120 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013120 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013121, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013121 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.2d.depth32f"
        ".size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013121 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013121 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.2d_array."
        "depth32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013188 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.2d_array.d"
        "epth32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013189 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.2d_array.depth"
        "32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013190 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.cube.depth32f"
        ".no_corners.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013275 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.cube.depth32f."
        "no_corners.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013276 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.cube.depth32f.no_"
        "corners.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013277 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.min_required_off"
        "set.2d.depth32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013305 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.min_required_offs"
        "et.2d.depth32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013306 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.min_required_offset."
        "2d.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013307 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.min_required_offset"
        ".2d_array.depth32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013335 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.min_required_offset."
        "2d_array.depth32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013336 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.min_required_offset.2d_"
        "array.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013337 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.implementation_of"
        "fset.2d.depth32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013397 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.implementation_off"
        "set.2d.depth32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013398 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.implementation_offset"
        ".2d.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013399 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.implementation_offse"
        "t.2d_array.depth32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013466 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.implementation_offset"
        ".2d_array.depth32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013467 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.implementation_offset.2d"
        "_array.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013468 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required"
        "_offset.2d.depth32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013503 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_"
        "offset.2d.depth32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013504 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_off"
        "set.2d.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013505 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_of"
        "fset.2d_array.depth32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013533 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_off"
        "set.2d_array.depth32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013534 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_offset"
        ".2d_array.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013535 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementatio"
        "n_offset.2d.depth32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013595 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation"
        "_offset.2d.depth32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013596 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_of"
        "fset.2d.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013597 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_o"
        "ffset.2d_array.depth32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013664 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_of"
        "fset.2d_array.depth32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013665 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_offse"
        "t.2d_array.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013666 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.min_required_of"
        "fset.2d.depth32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013701 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.min_required_off"
        "set.2d.depth32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013702 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset."
        "2d.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013703 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.min_required_offse"
        "t.2d_array.depth32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013731 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset"
        ".2d_array.depth32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013732 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset.2d_"
        "array.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013733 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.implementation_o"
        "ffset.2d.depth32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013793 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.implementation_of"
        "fset.2d.depth32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013794 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset"
        ".2d.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013795 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.implementation_offs"
        "et.2d_array.depth32f.size_pot.compare_greater.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013862 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.implementation_offse"
        "t.2d_array.depth32f.size_pot.compare_greater.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013863 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset.2d"
        "_array.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013864 end";
}
