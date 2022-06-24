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
#include "../ActsDeqpgles310033TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.rg8ui_r16ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032470 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.rg8ui_r16ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032471 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.rg8ui_r16ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032472 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_16_bits.rg8ui_r16ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032473 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8ui_r16ui.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032474 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.rg8ui_r16ui.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032475 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.rg8ui_r16ui.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032476 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.rg8ui_r16ui.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032477 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_16_bits.rg8ui_r16ui.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032478 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8ui_r16ui.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032479 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.rg8ui_r16ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032480 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.rg8ui_r16ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032481 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.rg8ui_r16ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032482 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8ui_r16ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032483 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.rg8ui_r16ui.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032484 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_16_bits.rg8ui_r16ui.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032485 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_16_bits.rg8ui_r16ui.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032486 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8ui_r16ui.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032487 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_16_bits.rg8ui_r16ui.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032488 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_16_bits.rg8ui_r16ui.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032489 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8ui_r16ui.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032490 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8ui_r16ui.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032491 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.rg8ui_r16ui.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032492 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_16_bits.rg8ui_r16ui.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032493 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_16_bits.rg8ui_r16ui.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032494 end";
}
