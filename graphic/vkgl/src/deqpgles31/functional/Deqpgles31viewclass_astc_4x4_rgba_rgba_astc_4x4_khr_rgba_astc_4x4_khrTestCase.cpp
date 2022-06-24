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
#include "../ActsDeqpgles310034TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4"
        "_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033163 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4"
        "_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033164 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x"
        "4_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033165 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
        "ba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033166 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4"
        "_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033167 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4"
        "_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033168 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x"
        "4_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033169 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
        "ba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033170 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x"
        "4_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033171 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x"
        "4_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033172 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4"
        "x4_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033173 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_r"
        "gba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033174 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
        "ba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033175 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
        "ba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033176 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_r"
        "gba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033177 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba."
        "rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033178 end";
}
