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
#include "../ActsDeqpgles310036TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32ui_signed_rg11_eac.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035079 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba32ui_signed_rg11_eac.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035080 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32ui_signed_rg11_eac.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035081 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba32ui_signed_rg11_eac.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035082 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
        "its_mixed.rgba32ui_signed_rg11_eac.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035083 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
        "bits_mixed.rgba32ui_signed_rg11_eac.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035084 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
        "mixed.rgba32ui_signed_rg11_eac.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035085 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
        "_mixed.rgba32ui_signed_rg11_eac.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035086 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
        "s_mixed.rgba32ui_signed_rg11_eac.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035087 end";
}

static HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
        "ts_mixed.rgba32ui_signed_rg11_eac.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035088 end";
}
