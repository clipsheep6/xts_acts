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

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_8_bits.r8_snorm_r8.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033007 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_8_bits.r8_snorm_r8.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033008 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_8_bits.r8_snorm_r8.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033009 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_8_bits.r8_snorm_r8.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033010 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_8_bits.r8_snorm_r8.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033011 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_8_bits.r8_snorm_r8.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033012 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_8_bits.r8_snorm_r8.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033013 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_8_bits.r8_snorm_r8.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033014 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_8_bits.r8_snorm_r8.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033015 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_8_bits.r8_snorm_r8.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033016 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_8_bits.r8_snorm_r8.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033017 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_8_bits.r8_snorm_r8.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033018 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_8_bits.r8_snorm_r8.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033019 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_8_bits.r8_snorm_r8.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033020 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_8_bits.r8_snorm_r8.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033021 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_8_bits.r8_snorm_r8.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033022 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_8_bits.r8_snorm_r8.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033023 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_8_bits.r8_snorm_r8.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033024 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_8_bits.r8_snorm_r8.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033025 end";
}

static HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_8_bits.r8_snorm_r8.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033026 end";
}
