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

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8_rgb9_e5.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028678 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8_rgb9_e5.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028679 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rgba8_rgb9_e5.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028680 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8_rgb9_e5.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028681 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8_rgb9_e5.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028682 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_32_bits.rgba8_rgb9_e5.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028683 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rgba8_rgb9_e5.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028684 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8_rgb9_e5.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028685 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rgba8_rgb9_e5.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028686 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_32_bits.rgba8_rgb9_e5.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028687 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_32_bits.rgba8_rgb9_e5.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028688 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_rgb9_e5.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028689 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8_rgb9_e5.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028690 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_32_bits.rgba8_rgb9_e5.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028691 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_rgb9_e5.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028692 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
        "s_32_bits.rgba8_rgb9_e5.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028693 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_rgb9_e5.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028694 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_32_bits.rgba8_rgb9_e5.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028695 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_32_bits.rgba8_rgb9_e5.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028696 end";
}

static HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
        "ss_32_bits.rgba8_rgb9_e5.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028697 end";
}
