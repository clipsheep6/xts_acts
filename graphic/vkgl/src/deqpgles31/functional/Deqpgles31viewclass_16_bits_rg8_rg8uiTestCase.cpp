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

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.rg8_rg8ui.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032215 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.rg8_rg8ui.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032216 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.rg8_rg8ui.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032217 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8_rg8ui.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032218 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.rg8_rg8ui.texture2d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032219 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.rg8_rg8ui.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032220 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.rg8_rg8ui.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032221 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.rg8_rg8ui.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032222 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8_rg8ui.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032223 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.rg8_rg8ui.texture3d_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032224 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.rg8_rg8ui.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032225 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.rg8_rg8ui.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032226 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compresse"
        "d.viewclass_16_bits.rg8_rg8ui.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032227 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.rg8_rg8ui.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032228 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.rg8_rg8ui.cubemap_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032229 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8_rg8ui.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032230 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8_rg8ui.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032231 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.rg8_rg8ui.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032232 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_16_bits.rg8_rg8ui.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032233 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_16_bits.rg8_rg8ui.texture2d_array_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032234 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.rg8_rg8ui.renderbuffer_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032235 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.rg8_rg8ui.renderbuffer_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032236 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_16_bits.rg8_rg8ui.renderbuffer_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032237 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_16_bits.rg8_rg8ui.renderbuffer_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032238 end";
}

static HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.rg8_rg8ui.renderbuffer_to_renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032239 end";
}
