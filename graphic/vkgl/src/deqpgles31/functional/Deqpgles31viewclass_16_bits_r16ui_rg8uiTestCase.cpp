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

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.r16ui_rg8ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032050 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.r16ui_rg8ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032051 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16ui_rg8ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032052 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_16_bits.r16ui_rg8ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032053 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16ui_rg8ui.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032054 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.r16ui_rg8ui.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032055 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.r16ui_rg8ui.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032056 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16ui_rg8ui.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032057 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_16_bits.r16ui_rg8ui.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032058 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16ui_rg8ui.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032059 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16ui_rg8ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032060 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16ui_rg8ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032061 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.r16ui_rg8ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032062 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16ui_rg8ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032063 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.r16ui_rg8ui.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032064 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_16_bits.r16ui_rg8ui.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032065 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_16_bits.r16ui_rg8ui.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032066 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16ui_rg8ui.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032067 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_16_bits.r16ui_rg8ui.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032068 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_16_bits.r16ui_rg8ui.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032069 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16ui_rg8ui.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032070 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16ui_rg8ui.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032071 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.r16ui_rg8ui.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032072 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_16_bits.r16ui_rg8ui.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032073 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_16_bits.r16ui_rg8ui.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032074 end";
}
