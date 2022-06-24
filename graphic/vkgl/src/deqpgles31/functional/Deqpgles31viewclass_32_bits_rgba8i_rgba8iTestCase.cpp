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

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8i_rgba8i.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028863 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8i_rgba8i.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028864 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rgba8i_rgba8i.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028865 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8i_rgba8i.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028866 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8i_rgba8i.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028867 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8i_rgba8i.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028868 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8i_rgba8i.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028869 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rgba8i_rgba8i.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028870 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8i_rgba8i.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028871 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8i_rgba8i.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028872 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rgba8i_rgba8i.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028873 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rgba8i_rgba8i.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028874 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_32_bits.rgba8i_rgba8i.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028875 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8i_rgba8i.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028876 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8i_rgba8i.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028877 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8i_rgba8i.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028878 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8i_rgba8i.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028879 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8i_rgba8i.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028880 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgba8i_rgba8i.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028881 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8i_rgba8i.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028882 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8i_rgba8i.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028883 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8i_rgba8i.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028884 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8i_rgba8i.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028885 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8i_rgba8i.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028886 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8i_rgba8i.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028887 end";
}
