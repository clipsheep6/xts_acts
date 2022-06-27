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

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.r32ui_rgba8.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027206 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.r32ui_rgba8.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027207 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_32_bits.r32ui_rgba8.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027208 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32ui_rgba8.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027209 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32ui_rgba8.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027210 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.r32ui_rgba8.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027211 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.r32ui_rgba8.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027212 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_32_bits.r32ui_rgba8.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027213 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32ui_rgba8.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027214 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32ui_rgba8.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027215 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_32_bits.r32ui_rgba8.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027216 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_32_bits.r32ui_rgba8.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027217 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_32_bits.r32ui_rgba8.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027218 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32ui_rgba8.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027219 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.r32ui_rgba8.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027220 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32ui_rgba8.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027221 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32ui_rgba8.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027222 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32ui_rgba8.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027223 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.r32ui_rgba8.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027224 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.r32ui_rgba8.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027225 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32ui_rgba8.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027226 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.r32ui_rgba8.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027227 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.r32ui_rgba8.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027228 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_32_bits.r32ui_rgba8.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027229 end";
}

static HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.r32ui_rgba8.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027230 end";
}
