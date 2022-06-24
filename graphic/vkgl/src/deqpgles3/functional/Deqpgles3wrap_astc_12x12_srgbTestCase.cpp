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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30024TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x12_srgb.clamp_clamp_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023851 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc"
        "_12x12_srgb.clamp_clamp_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023852 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x12_srgb.clamp_repeat_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023853 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x12_srgb.clamp_repeat_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023854 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x12_srgb.clamp_mirror_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023855 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x12_srgb.clamp_mirror_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023856 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x12_srgb.repeat_clamp_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023857 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x12_srgb.repeat_clamp_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023858 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_1"
        "2x12_srgb.repeat_repeat_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023859 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x12_srgb.repeat_repeat_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023860 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_1"
        "2x12_srgb.repeat_mirror_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023861 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x12_srgb.repeat_mirror_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023862 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x12_srgb.mirror_clamp_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023863 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x12_srgb.mirror_clamp_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023864 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_1"
        "2x12_srgb.mirror_repeat_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023865 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x12_srgb.mirror_repeat_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023866 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_1"
        "2x12_srgb.mirror_mirror_nearest_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023867 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_"
        "12x12_srgb.mirror_mirror_linear_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023868 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12"
        "x12_srgb.clamp_clamp_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023869 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_1"
        "2x12_srgb.clamp_clamp_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023870 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12"
        "x12_srgb.clamp_repeat_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023871 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12"
        "x12_srgb.clamp_repeat_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023872 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12"
        "x12_srgb.clamp_mirror_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023873 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12"
        "x12_srgb.clamp_mirror_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023874 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12"
        "x12_srgb.repeat_clamp_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023875 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12"
        "x12_srgb.repeat_clamp_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023876 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12x"
        "12_srgb.repeat_repeat_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023877 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12"
        "x12_srgb.repeat_repeat_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023878 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12x"
        "12_srgb.repeat_mirror_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023879 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12"
        "x12_srgb.repeat_mirror_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023880 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12"
        "x12_srgb.mirror_clamp_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023881 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12"
        "x12_srgb.mirror_clamp_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023882 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12x"
        "12_srgb.mirror_repeat_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023883 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12"
        "x12_srgb.mirror_repeat_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023884 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12x"
        "12_srgb.mirror_mirror_nearest_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023885 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.wrap.astc_12"
        "x12_srgb.mirror_mirror_linear_not_divisible",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023886 end";
}
