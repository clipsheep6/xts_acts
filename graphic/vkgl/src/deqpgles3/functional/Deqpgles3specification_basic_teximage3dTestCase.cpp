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

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgba32f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026296 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgba32f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026297 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgba32i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026298 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgba32i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026299 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.basic_teximage3d.rgba32ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026300 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage3d.rgba32ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026301 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgba16f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026302 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgba16f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026303 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgba16i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026304 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgba16i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026305 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.basic_teximage3d.rgba16ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026306 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage3d.rgba16ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026307 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.rgba8_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026308 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.rgba8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026309 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgba8i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026310 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgba8i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026311 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgba8ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026312 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgba8ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026313 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificati"
        "on.basic_teximage3d.srgb8_alpha8_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026314 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.srgb8_alpha8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026315 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.basic_teximage3d.rgb10_a2_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026316 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage3d.rgb10_a2_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026317 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificat"
        "ion.basic_teximage3d.rgb10_a2ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026318 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.rgb10_a2ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026319 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.rgba4_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026320 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.rgba4_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026321 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgb5_a1_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026322 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgb5_a1_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026323 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificat"
        "ion.basic_teximage3d.rgba8_snorm_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026324 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.rgba8_snorm_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026325 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.rgb8_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026326 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.rgb8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026327 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgb565_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026328 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgb565_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026329 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificatio"
        "n.basic_teximage3d.r11f_g11f_b10f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026330 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.basic_teximage3d.r11f_g11f_b10f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026331 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgb32f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026332 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgb32f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026333 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgb32i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026334 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgb32i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026335 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgb32ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026336 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgb32ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026337 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgb16f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026338 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgb16f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026339 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgb16i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026340 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgb16i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026341 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgb16ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026342 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgb16ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026343 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificat"
        "ion.basic_teximage3d.rgb8_snorm_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026344 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.rgb8_snorm_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026345 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.rgb8i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026346 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.rgb8i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026347 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgb8ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026348 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgb8ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026349 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.srgb8_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026350 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.srgb8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026351 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rgb9_e5_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026352 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rgb9_e5_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026353 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.rg32f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026354 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.rg32f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026355 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.rg32i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026356 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.rg32i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026357 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rg32ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026358 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rg32ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026359 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.rg16f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026360 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.rg16f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026361 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.rg16i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026362 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.rg16i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026363 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage3d.rg16ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026364 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage3d.rg16ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026365 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage3d.rg8_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026366 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.basic_teximage3d.rg8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026367 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.rg8i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026368 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.rg8i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026369 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.rg8ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026370 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.rg8ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026371 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.basic_teximage3d.rg8_snorm_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026372 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage3d.rg8_snorm_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026373 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.r32f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026374 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.r32f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026375 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.r32i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026376 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.r32i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026377 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.r32ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026378 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.r32ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026379 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.r16f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026380 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.r16f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026381 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.r16i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026382 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.r16i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026383 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.r16ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026384 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.r16ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026385 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage3d.r8_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026386 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.basic_teximage3d.r8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026387 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage3d.r8i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026388 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.basic_teximage3d.r8i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026389 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage3d.r8ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026390 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage3d.r8ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026391 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.basic_teximage3d.r8_snorm_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026392 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage3d.r8_snorm_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026393 end";
}
