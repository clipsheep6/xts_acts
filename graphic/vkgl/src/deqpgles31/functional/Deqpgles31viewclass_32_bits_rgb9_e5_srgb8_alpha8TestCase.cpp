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
#include "../ActsDeqpgles310032TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgb9_e5_srgb8_alpha8.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031156 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgb9_e5_srgb8_alpha8.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031157 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgb9_e5_srgb8_alpha8.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031158 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.rgb9_e5_srgb8_alpha8.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031159 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgb9_e5_srgb8_alpha8.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031160 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgb9_e5_srgb8_alpha8.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031161 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgb9_e5_srgb8_alpha8.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031162 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgb9_e5_srgb8_alpha8.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031163 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.rgb9_e5_srgb8_alpha8.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031164 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgb9_e5_srgb8_alpha8.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031165 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgb9_e5_srgb8_alpha8.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031166 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgb9_e5_srgb8_alpha8.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031167 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgb9_e5_srgb8_alpha8.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031168 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb9_e5_srgb8_alpha8.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031169 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.rgb9_e5_srgb8_alpha8.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031170 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.rgb9_e5_srgb8_alpha8.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031171 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_32_bits.rgb9_e5_srgb8_alpha8.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031172 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgb9_e5_srgb8_alpha8.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031173 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
        "_bits.rgb9_e5_srgb8_alpha8.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031174 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "32_bits.rgb9_e5_srgb8_alpha8.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031175 end";
}
