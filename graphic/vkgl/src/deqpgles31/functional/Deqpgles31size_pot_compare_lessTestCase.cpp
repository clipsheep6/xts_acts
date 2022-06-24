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

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013116, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013116 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.2d.de"
        "pth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013116 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013116 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013117, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013117 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.2d.dep"
        "th32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013117 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013117 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013118, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013118 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.2d.depth3"
        "2f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013118 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013118 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.2d_array"
        ".depth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013185 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.2d_array."
        "depth32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013186 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.2d_array.dep"
        "th32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013187 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.cube.depth3"
        "2f.no_corners.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013272 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.cube.depth32"
        "f.no_corners.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013273 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.basic.cube.depth32f.no"
        "_corners.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013274 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.min_required_o"
        "ffset.2d.depth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013302 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.min_required_of"
        "fset.2d.depth32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013303 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.min_required_offset"
        ".2d.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013304 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.min_required_offs"
        "et.2d_array.depth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013332 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.min_required_offse"
        "t.2d_array.depth32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013333 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.min_required_offset.2d"
        "_array.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013334 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.implementation_"
        "offset.2d.depth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013394 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.implementation_o"
        "ffset.2d.depth32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013395 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.implementation_offse"
        "t.2d.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013396 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.implementation_off"
        "set.2d_array.depth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013463 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.implementation_offs"
        "et.2d_array.depth32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013464 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.implementation_offset.2"
        "d_array.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013465 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_requir"
        "ed_offset.2d.depth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013500 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_require"
        "d_offset.2d.depth32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013501 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_of"
        "fset.2d.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013502 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_"
        "offset.2d_array.depth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013530 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_o"
        "ffset.2d_array.depth32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013531 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_offse"
        "t.2d_array.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013532 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementat"
        "ion_offset.2d.depth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013592 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementati"
        "on_offset.2d.depth32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013593 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_o"
        "ffset.2d.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013594 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation"
        "_offset.2d_array.depth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013661 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_"
        "offset.2d_array.depth32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013662 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_offs"
        "et.2d_array.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013663 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.min_required_o"
        "ffset.2d.depth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013698 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.min_required_of"
        "fset.2d.depth32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013699 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.min_required_offse"
        "t.2d.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013700 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.min_required_offs"
        "et.2d_array.depth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013728 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.min_required_offse"
        "t.2d_array.depth32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013729 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset.2"
        "d_array.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013730 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.implementation_"
        "offset.2d.depth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013790 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.implementation_o"
        "ffset.2d.depth32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013791 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.implementation_offs"
        "et.2d.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013792 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.implementation_off"
        "set.2d_array.depth32f.size_pot.compare_less.clamp_to_edge_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013859 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.implementation_offs"
        "et.2d_array.depth32f.size_pot.compare_less.repeat_mirrored_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013860 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset."
        "2d_array.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013861 end";
}
