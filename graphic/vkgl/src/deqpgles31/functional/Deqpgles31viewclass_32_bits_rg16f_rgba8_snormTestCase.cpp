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
#include "../ActsDeqpgles310028TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16f_rgba8_snorm.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027612 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16f_rgba8_snorm.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027613 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rg16f_rgba8_snorm.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027614 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rg16f_rgba8_snorm.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027615 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16f_rgba8_snorm.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027616 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16f_rgba8_snorm.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027617 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rg16f_rgba8_snorm.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027618 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rg16f_rgba8_snorm.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027619 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rg16f_rgba8_snorm.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027620 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rg16f_rgba8_snorm.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027621 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rg16f_rgba8_snorm.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027622 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rg16f_rgba8_snorm.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027623 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rg16f_rgba8_snorm.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027624 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rg16f_rgba8_snorm.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027625 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rg16f_rgba8_snorm.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027626 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.rg16f_rgba8_snorm.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027627 end";
}
