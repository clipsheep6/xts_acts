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

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgba32f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026408 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgba32f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026409 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgba32i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026410 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgba32i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026411 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.teximage3d_pbo.rgba32ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026412 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.teximage3d_pbo.rgba32ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026413 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgba16f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026414 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgba16f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026415 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgba16i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026416 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgba16i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026417 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.teximage3d_pbo.rgba16ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026418 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.teximage3d_pbo.rgba16ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026419 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rgba8_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026420 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.rgba8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026421 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgba8i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026422 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgba8i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026423 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgba8ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026424 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgba8ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026425 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificat"
        "ion.teximage3d_pbo.srgb8_alpha8_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026426 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.srgb8_alpha8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026427 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.teximage3d_pbo.rgb10_a2_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026428 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.teximage3d_pbo.rgb10_a2_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026429 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.teximage3d_pbo.rgb10_a2ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026430 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rgb10_a2ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026431 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rgba4_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026432 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.rgba4_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026433 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgb5_a1_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026434 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgb5_a1_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026435 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.teximage3d_pbo.rgba8_snorm_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026436 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rgba8_snorm_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026437 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rgb8_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026438 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.rgb8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026439 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgb565_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026440 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgb565_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026441 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificati"
        "on.teximage3d_pbo.r11f_g11f_b10f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026442 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.teximage3d_pbo.r11f_g11f_b10f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026443 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgb32f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026444 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgb32f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026445 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgb32i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026446 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgb32i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026447 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgb32ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026448 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgb32ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026449 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgb16f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026450 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgb16f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026451 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgb16i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026452 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgb16i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026453 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgb16ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026454 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgb16ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026455 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.teximage3d_pbo.rgb8_snorm_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026456 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rgb8_snorm_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026457 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rgb8i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026458 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.rgb8i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026459 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgb8ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026460 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgb8ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026461 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.srgb8_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026462 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.srgb8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026463 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rgb9_e5_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026464 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rgb9_e5_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026465 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rg32f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026466 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.rg32f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026467 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rg32i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026468 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.rg32i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026469 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rg32ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026470 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rg32ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026471 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rg16f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026472 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.rg16f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026473 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rg16i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026474 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.rg16i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026475 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.teximage3d_pbo.rg16ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026476 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.teximage3d_pbo.rg16ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026477 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.teximage3d_pbo.rg8_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026478 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.sp"
        "ecification.teximage3d_pbo.rg8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026479 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rg8i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026480 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.rg8i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026481 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rg8ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026482 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.rg8ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026483 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.teximage3d_pbo.rg8_snorm_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026484 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.teximage3d_pbo.rg8_snorm_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026485 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.r32f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026486 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.r32f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026487 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.r32i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026488 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.r32i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026489 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.r32ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026490 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.r32ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026491 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.r16f_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026492 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.r16f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026493 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.r16i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026494 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.r16i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026495 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.r16ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026496 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.r16ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026497 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.teximage3d_pbo.r8_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026498 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.sp"
        "ecification.teximage3d_pbo.r8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026499 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.teximage3d_pbo.r8i_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026500 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.sp"
        "ecification.teximage3d_pbo.r8i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026501 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.r8ui_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026502 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.teximage3d_pbo.r8ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026503 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.teximage3d_pbo.r8_snorm_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026504 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.teximage3d_pbo.r8_snorm_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026505 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.teximage3d_pbo.rgb8_offset_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026506 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.teximage3d_pbo.rgb8_offset_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026507 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificati"
        "on.teximage3d_pbo.rgb8_alignment_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026508 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.teximage3d_pbo.rgb8_alignment_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026509 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificatio"
        "n.teximage3d_pbo.rgb8_image_height_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026510 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.teximage3d_pbo.rgb8_image_height_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026511 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificati"
        "on.teximage3d_pbo.rgb8_row_length_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026512 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.teximage3d_pbo.rgb8_row_length_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026513 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificatio"
        "n.teximage3d_pbo.rgb8_skip_images_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026514 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.teximage3d_pbo.rgb8_skip_images_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026515 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificati"
        "on.teximage3d_pbo.rgb8_skip_rows_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026516 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.teximage3d_pbo.rgb8_skip_rows_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026517 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificatio"
        "n.teximage3d_pbo.rgb8_skip_pixels_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026518 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.teximage3d_pbo.rgb8_skip_pixels_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026519 end";
}
