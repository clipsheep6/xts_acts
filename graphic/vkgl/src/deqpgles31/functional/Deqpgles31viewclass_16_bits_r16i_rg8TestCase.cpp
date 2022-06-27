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

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16i_rg8.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031835 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16i_rg8.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031836 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.r16i_rg8.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031837 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16i_rg8.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031838 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.r16i_rg8.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031839 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16i_rg8.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031840 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16i_rg8.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031841 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.r16i_rg8.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031842 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16i_rg8.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031843 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.r16i_rg8.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031844 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.r16i_rg8.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031845 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.r16i_rg8.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031846 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compresse"
        "d.viewclass_16_bits.r16i_rg8.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031847 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.r16i_rg8.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031848 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16i_rg8.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031849 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16i_rg8.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031850 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16i_rg8.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031851 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.r16i_rg8.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031852 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_16_bits.r16i_rg8.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031853 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_16_bits.r16i_rg8.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031854 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.r16i_rg8.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031855 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.r16i_rg8.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031856 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16i_rg8.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031857 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.view"
        "class_16_bits.r16i_rg8.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031858 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16i_rg8.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031859 end";
}
