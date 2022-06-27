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
#include "../ActsDeqpgles310035TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba32f_srgb8_alpha8_etc2_eac.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034075 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32f_srgb8_alpha8_etc2_eac.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034076 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba32f_srgb8_alpha8_etc2_eac.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034077 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32f_srgb8_alpha8_etc2_eac.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034078 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32f_srgb8_alpha8_etc2_eac.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034079 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32f_srgb8_alpha8_etc2_eac.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034080 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
        "xed.rgba32f_srgb8_alpha8_etc2_eac.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034081 end";
}

static HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
        "ixed.rgba32f_srgb8_alpha8_etc2_eac.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034082 end";
}
