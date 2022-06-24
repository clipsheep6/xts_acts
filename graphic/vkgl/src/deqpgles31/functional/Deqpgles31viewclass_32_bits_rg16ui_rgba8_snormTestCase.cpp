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
#include "../ActsDeqpgles310029TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16ui_rgba8_snorm.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028283 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16ui_rgba8_snorm.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028284 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16ui_rgba8_snorm.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028285 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rg16ui_rgba8_snorm.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028286 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16ui_rgba8_snorm.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028287 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16ui_rgba8_snorm.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028288 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16ui_rgba8_snorm.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028289 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rg16ui_rgba8_snorm.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028290 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16ui_rgba8_snorm.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028291 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16ui_rgba8_snorm.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028292 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rg16ui_rgba8_snorm.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028293 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rg16ui_rgba8_snorm.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028294 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rg16ui_rgba8_snorm.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028295 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rg16ui_rgba8_snorm.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028296 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rg16ui_rgba8_snorm.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028297 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
        "2_bits.rg16ui_rgba8_snorm.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028298 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rg16ui_rgba8_snorm.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028299 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rg16ui_rgba8_snorm.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028300 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16ui_rgba8_snorm.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028301 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.rg16ui_rgba8_snorm.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028302 end";
}
