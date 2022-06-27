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

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_48_bits.rgb16ui_rgb16i.texture2d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026452 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_48_bits.rgb16ui_rgb16i.texture2d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026453 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_48_bits.rgb16ui_rgb16i.texture2d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026454 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_48_bits.rgb16ui_rgb16i.texture2d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026455 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_48_bits.rgb16ui_rgb16i.texture3d_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026456 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vie"
        "wclass_48_bits.rgb16ui_rgb16i.texture3d_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026457 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_48_bits.rgb16ui_rgb16i.texture3d_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026458 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_48_bits.rgb16ui_rgb16i.texture3d_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026459 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_48_bits.rgb16ui_rgb16i.cubemap_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026460 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.vi"
        "ewclass_48_bits.rgb16ui_rgb16i.cubemap_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026461 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.v"
        "iewclass_48_bits.rgb16ui_rgb16i.cubemap_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026462 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_48_bits.rgb16ui_rgb16i.cubemap_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026463 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_48_bits.rgb16ui_rgb16i.texture2d_array_to_texture2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026464 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
        "ass_48_bits.rgb16ui_rgb16i.texture2d_array_to_texture3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026465 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
        "lass_48_bits.rgb16ui_rgb16i.texture2d_array_to_cubemap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026466 end";
}

static HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
        "_48_bits.rgb16ui_rgb16i.texture2d_array_to_texture2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026467 end";
}
