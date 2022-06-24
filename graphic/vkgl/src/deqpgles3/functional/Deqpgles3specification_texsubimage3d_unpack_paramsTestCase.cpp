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

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification."
        "texsubimage3d_unpack_params.rgb8_image_height",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026579 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification"
        ".texsubimage3d_unpack_params.rgb8_row_length",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026580 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification."
        "texsubimage3d_unpack_params.rgb8_skip_images",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026581 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification"
        ".texsubimage3d_unpack_params.rgb8_skip_rows",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026582 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification."
        "texsubimage3d_unpack_params.rgb8_skip_pixels",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026583 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificati"
        "on.texsubimage3d_unpack_params.r8_complex1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026584 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificati"
        "on.texsubimage3d_unpack_params.r8_complex2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026585 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificati"
        "on.texsubimage3d_unpack_params.r8_complex3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026586 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificati"
        "on.texsubimage3d_unpack_params.r8_complex4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026587 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification"
        ".texsubimage3d_unpack_params.rgba8_complex1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026588 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification"
        ".texsubimage3d_unpack_params.rgba8_complex2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026589 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification"
        ".texsubimage3d_unpack_params.rgba8_complex3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026590 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification"
        ".texsubimage3d_unpack_params.rgba8_complex4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026591 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specification"
        ".texsubimage3d_unpack_params.rgba32f_complex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026592 end";
}
