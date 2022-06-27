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
#include "../ActsDeqpgles30027TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgba32f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026708 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgba32f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026709 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgba32i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026710 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgba32i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026711 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgba32ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026712 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgba32ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026713 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgba16f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026714 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgba16f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026715 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgba16i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026716 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgba16i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026717 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgba16ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026718 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgba16ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026719 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rgba8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026720 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgba8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026721 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rgba8i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026722 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgba8i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026723 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgba8ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026724 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgba8ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026725 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.texstorage2d.format.srgb8_alpha8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026726 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificat"
        "ion.texstorage2d.format.srgb8_alpha8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026727 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgb10_a2_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026728 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgb10_a2_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026729 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgb10_a2ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026730 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.texstorage2d.format.rgb10_a2ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026731 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rgba4_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026732 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgba4_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026733 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgb5_a1_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026734 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgb5_a1_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026735 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.texstorage2d.format.rgba8_snorm_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026736 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificat"
        "ion.texstorage2d.format.rgba8_snorm_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026737 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.texstorage2d.format.rgb8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026738 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rgb8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026739 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rgb565_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026740 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgb565_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026741 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificat"
        "ion.texstorage2d.format.r11f_g11f_b10f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026742 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificati"
        "on.texstorage2d.format.r11f_g11f_b10f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026743 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rgb32f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026744 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgb32f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026745 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rgb32i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026746 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgb32i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026747 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgb32ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026748 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgb32ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026749 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rgb16f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026750 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgb16f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026751 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rgb16i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026752 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgb16i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026753 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgb16ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026754 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgb16ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026755 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgb8_snorm_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026756 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.texstorage2d.format.rgb8_snorm_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026757 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rgb8i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026758 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgb8i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026759 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rgb8ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026760 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgb8ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026761 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.srgb8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026762 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.srgb8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026763 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rgb9_e5_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026764 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rgb9_e5_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026765 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rg32f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026766 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rg32f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026767 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rg32i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026768 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rg32i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026769 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rg32ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026770 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rg32ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026771 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rg16f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026772 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rg16f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026773 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rg16i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026774 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rg16i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026775 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rg16ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026776 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rg16ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026777 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.texstorage2d.format.rg8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026778 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rg8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026779 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.texstorage2d.format.rg8i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026780 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rg8i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026781 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.rg8ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026782 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.rg8ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026783 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.rg8_snorm_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026784 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.texstorage2d.format.rg8_snorm_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026785 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.texstorage2d.format.r32f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026786 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.r32f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026787 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.texstorage2d.format.r32i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026788 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.r32i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026789 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.r32ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026790 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.r32ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026791 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.texstorage2d.format.r16f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026792 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.r16f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026793 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.texstorage2d.format.r16i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026794 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.r16i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026795 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.r16ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026796 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.r16ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026797 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.texstorage2d.format.r8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026798 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.texstorage2d.format.r8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026799 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.texstorage2d.format.r8i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026800 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.r8i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026801 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.texstorage2d.format.r8ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026802 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.texstorage2d.format.r8ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026803 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.texstorage2d.format.r8_snorm_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026804 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.texstorage2d.format.r8_snorm_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026805 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificatio"
        "n.texstorage2d.format.depth_component32f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026806 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification"
        ".texstorage2d.format.depth_component32f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026807 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificatio"
        "n.texstorage2d.format.depth_component24_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026808 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification"
        ".texstorage2d.format.depth_component24_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026809 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificatio"
        "n.texstorage2d.format.depth_component16_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026810 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification"
        ".texstorage2d.format.depth_component16_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026811 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificatio"
        "n.texstorage2d.format.depth32f_stencil8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026812 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification"
        ".texstorage2d.format.depth32f_stencil8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026813 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificati"
        "on.texstorage2d.format.depth24_stencil8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026814 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificatio"
        "n.texstorage2d.format.depth24_stencil8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026815 end";
}
