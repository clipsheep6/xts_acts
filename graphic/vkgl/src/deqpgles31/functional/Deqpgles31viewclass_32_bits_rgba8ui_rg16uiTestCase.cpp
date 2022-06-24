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
#include "../ActsDeqpgles310030TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8ui_rg16ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029163 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8ui_rg16ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029164 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8ui_rg16ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029165 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgba8ui_rg16ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029166 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8ui_rg16ui.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029167 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8ui_rg16ui.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029168 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8ui_rg16ui.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029169 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8ui_rg16ui.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029170 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgba8ui_rg16ui.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029171 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8ui_rg16ui.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029172 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8ui_rg16ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029173 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8ui_rg16ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029174 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rgba8ui_rg16ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029175 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8ui_rg16ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029176 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8ui_rg16ui.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029177 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgba8ui_rg16ui.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029178 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgba8ui_rg16ui.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029179 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8ui_rg16ui.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029180 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.rgba8ui_rg16ui.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029181 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8ui_rg16ui.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029182 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8ui_rg16ui.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029183 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8ui_rg16ui.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029184 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8ui_rg16ui.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029185 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8ui_rg16ui.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029186 end";
}

static HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgba8ui_rg16ui.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029187 end";
}
