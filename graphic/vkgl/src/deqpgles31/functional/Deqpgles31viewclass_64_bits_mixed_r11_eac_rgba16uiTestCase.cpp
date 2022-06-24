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
#include "../ActsDeqpgles310038TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
        "4_bits_mixed.r11_eac_rgba16ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037461 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
        "4_bits_mixed.r11_eac_rgba16ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037462 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
        "64_bits_mixed.r11_eac_rgba16ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037463 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
        "its_mixed.r11_eac_rgba16ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037464 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
        "bits_mixed.r11_eac_rgba16ui.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037465 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
        "64_bits_mixed.r11_eac_rgba16ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037466 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
        "64_bits_mixed.r11_eac_rgba16ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037467 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass"
        "_64_bits_mixed.r11_eac_rgba16ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037468 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
        "bits_mixed.r11_eac_rgba16ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037469 end";
}

static HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
        "_bits_mixed.r11_eac_rgba16ui.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037470 end";
}
