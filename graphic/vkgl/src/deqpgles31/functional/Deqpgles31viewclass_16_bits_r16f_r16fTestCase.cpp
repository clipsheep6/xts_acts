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

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16f_r16f.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031633 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16f_r16f.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031634 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.r16f_r16f.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031635 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16f_r16f.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031636 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16f_r16f.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031637 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed."
        "viewclass_16_bits.r16f_r16f.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031638 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.r16f_r16f.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031639 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16f_r16f.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031640 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.r16f_r16f.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031641 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed"
        ".viewclass_16_bits.r16f_r16f.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031642 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compresse"
        "d.viewclass_16_bits.r16f_r16f.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031643 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.r16f_r16f.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031644 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16f_r16f.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031645 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_16_bits.r16f_r16f.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031646 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_16_bits.r16f_r16f.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031647 end";
}

static HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_16_bits.r16f_r16f.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031648 end";
}
