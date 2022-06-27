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

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rg16f_rgba8ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027552 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rg16f_rgba8ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027553 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rg16f_rgba8ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027554 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16f_rgba8ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027555 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16f_rgba8ui.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027556 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rg16f_rgba8ui.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027557 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rg16f_rgba8ui.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027558 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rg16f_rgba8ui.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027559 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16f_rgba8ui.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027560 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16f_rgba8ui.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027561 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rg16f_rgba8ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027562 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rg16f_rgba8ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027563 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_32_bits.rg16f_rgba8ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027564 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16f_rgba8ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027565 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rg16f_rgba8ui.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027566 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16f_rgba8ui.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027567 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16f_rgba8ui.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027568 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16f_rgba8ui.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027569 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rg16f_rgba8ui.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027570 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rg16f_rgba8ui.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027571 end";
}
