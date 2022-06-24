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
#include "../ActsDeqpgles310026TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_64_bits.rg32i_rg32i.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025704 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_64_bits.rg32i_rg32i.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025705 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_64_bits.rg32i_rg32i.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025706 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_64_bits.rg32i_rg32i.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025707 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_64_bits.rg32i_rg32i.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025708 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_64_bits.rg32i_rg32i.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025709 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_64_bits.rg32i_rg32i.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025710 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_64_bits.rg32i_rg32i.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025711 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_64_bits.rg32i_rg32i.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025712 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_64_bits.rg32i_rg32i.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025713 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_64_bits.rg32i_rg32i.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025714 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_64_bits.rg32i_rg32i.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025715 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_64_bits.rg32i_rg32i.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025716 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_64_bits.rg32i_rg32i.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025717 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_64_bits.rg32i_rg32i.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025718 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_64_bits.rg32i_rg32i.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025719 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_64_bits.rg32i_rg32i.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025720 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_64_bits.rg32i_rg32i.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025721 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_64_bits.rg32i_rg32i.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025722 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_64_bits.rg32i_rg32i.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025723 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_64_bits.rg32i_rg32i.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025724 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_64_bits.rg32i_rg32i.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025725 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_64_bits.rg32i_rg32i.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025726 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_64_bits.rg32i_rg32i.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025727 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_64_bits.rg32i_rg32i.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025728 end";
}
