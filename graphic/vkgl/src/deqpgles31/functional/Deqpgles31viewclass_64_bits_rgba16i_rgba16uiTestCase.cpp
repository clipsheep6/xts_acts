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
#include "../ActsDeqpgles310027TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_64_bits.rgba16i_rgba16ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026175 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_64_bits.rgba16i_rgba16ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026176 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_64_bits.rgba16i_rgba16ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026177 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_64_bits.rgba16i_rgba16ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026178 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_64_bits.rgba16i_rgba16ui.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026179 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_64_bits.rgba16i_rgba16ui.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026180 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_64_bits.rgba16i_rgba16ui.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026181 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_64_bits.rgba16i_rgba16ui.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026182 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_64_bits.rgba16i_rgba16ui.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026183 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_64_bits.rgba16i_rgba16ui.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026184 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_64_bits.rgba16i_rgba16ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026185 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_64_bits.rgba16i_rgba16ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026186 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_64_bits.rgba16i_rgba16ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026187 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_64_bits.rgba16i_rgba16ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026188 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_64_bits.rgba16i_rgba16ui.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026189 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_64_bits.rgba16i_rgba16ui.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026190 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_64_bits.rgba16i_rgba16ui.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026191 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_64_bits.rgba16i_rgba16ui.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026192 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
        "64_bits.rgba16i_rgba16ui.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026193 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_64_bits.rgba16i_rgba16ui.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026194 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_64_bits.rgba16i_rgba16ui.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026195 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_64_bits.rgba16i_rgba16ui.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026196 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_64_bits.rgba16i_rgba16ui.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026197 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_64_bits.rgba16i_rgba16ui.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026198 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_64_bits.rgba16i_rgba16ui.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026199 end";
}
