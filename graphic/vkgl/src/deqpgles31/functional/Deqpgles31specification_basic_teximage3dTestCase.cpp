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

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifica"
        "tion.basic_teximage3d.rgba32f_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012673 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifica"
        "tion.basic_teximage3d.rgba32i_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012674 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifica"
        "tion.basic_teximage3d.rgba32ui_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012675 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifica"
        "tion.basic_teximage3d.rgba16f_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012676 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifica"
        "tion.basic_teximage3d.rgba16i_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012677 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifica"
        "tion.basic_teximage3d.rgba16ui_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012678 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rgba8_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012679 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rgba8i_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012680 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifica"
        "tion.basic_teximage3d.rgba8ui_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012681 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specificati"
        "on.basic_teximage3d.srgb8_alpha8_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012682 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifica"
        "tion.basic_teximage3d.rgb10_a2_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012683 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specificat"
        "ion.basic_teximage3d.rgb10_a2ui_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012684 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rgba4_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012685 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifica"
        "tion.basic_teximage3d.rgb5_a1_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012686 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specificati"
        "on.basic_teximage3d.rgba8_snorm_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012687 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifi"
        "cation.basic_teximage3d.rgb8_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012688 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rgb565_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012689 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specificatio"
        "n.basic_teximage3d.r11f_g11f_b10f_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012690 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rgb32f_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012691 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rgb32i_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012692 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifica"
        "tion.basic_teximage3d.rgb32ui_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012693 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rgb16f_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012694 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rgb16i_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012695 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifica"
        "tion.basic_teximage3d.rgb16ui_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012696 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specificat"
        "ion.basic_teximage3d.rgb8_snorm_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012697 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rgb8i_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012698 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rgb8ui_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012699 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.srgb8_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012700 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifica"
        "tion.basic_teximage3d.rgb9_e5_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012701 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rg32f_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012702 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rg32i_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012703 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rg32ui_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012704 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rg16f_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012705 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rg16i_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012706 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rg16ui_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012707 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifi"
        "cation.basic_teximage3d.rg8_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012708 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifi"
        "cation.basic_teximage3d.rg8i_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012709 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.rg8ui_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012710 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specificat"
        "ion.basic_teximage3d.rg8_snorm_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012711 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifi"
        "cation.basic_teximage3d.r32f_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012712 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifi"
        "cation.basic_teximage3d.r32i_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012713 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.r32ui_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012714 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifi"
        "cation.basic_teximage3d.r16f_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012715 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifi"
        "cation.basic_teximage3d.r16i_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012716 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specific"
        "ation.basic_teximage3d.r16ui_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012717 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specif"
        "ication.basic_teximage3d.r8_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012718 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifi"
        "cation.basic_teximage3d.r8i_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012719 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifi"
        "cation.basic_teximage3d.r8ui_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012720 end";
}

static HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_012721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.specifica"
        "tion.basic_teximage3d.r8_snorm_cube_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310013TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310013TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310013TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310013TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310013TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_012721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_012721 end";
}
