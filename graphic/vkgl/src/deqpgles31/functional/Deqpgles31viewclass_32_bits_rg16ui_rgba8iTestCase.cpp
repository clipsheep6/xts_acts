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

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rg16ui_rgba8i.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028163 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rg16ui_rgba8i.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028164 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rg16ui_rgba8i.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028165 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16ui_rgba8i.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028166 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16ui_rgba8i.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028167 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rg16ui_rgba8i.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028168 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rg16ui_rgba8i.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028169 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rg16ui_rgba8i.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028170 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16ui_rgba8i.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028171 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16ui_rgba8i.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028172 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rg16ui_rgba8i.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028173 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rg16ui_rgba8i.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028174 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_32_bits.rg16ui_rgba8i.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028175 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16ui_rgba8i.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028176 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rg16ui_rgba8i.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028177 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16ui_rgba8i.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028178 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16ui_rgba8i.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028179 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16ui_rgba8i.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028180 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rg16ui_rgba8i.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028181 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rg16ui_rgba8i.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028182 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16ui_rgba8i.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028183 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rg16ui_rgba8i.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028184 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rg16ui_rgba8i.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028185 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rg16ui_rgba8i.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028186 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rg16ui_rgba8i.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028187 end";
}
