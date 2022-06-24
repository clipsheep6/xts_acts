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
#include "../ActsDeqpgles310023TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022675 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.pro"
        "gram_output.type.separable_tess_ctrl.basic_type.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022676 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022677 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022678 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022679 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022680 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022681 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022682 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022683 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022684 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022685 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022686 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022687 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.progr"
        "am_output.type.separable_tess_ctrl.basic_type.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022688 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.progr"
        "am_output.type.separable_tess_ctrl.basic_type.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022689 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.progr"
        "am_output.type.separable_tess_ctrl.basic_type.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022690 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022691 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.progr"
        "am_output.type.separable_tess_ctrl.basic_type.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022692 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.progr"
        "am_output.type.separable_tess_ctrl.basic_type.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022693 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.progr"
        "am_output.type.separable_tess_ctrl.basic_type.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022694 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_output.type.separable_tess_ctrl.basic_type.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022695 end";
}
