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
#include "../ActsDeqpgles30042TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negati"
        "ve_api.texture.activetexture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041956 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negat"
        "ive_api.texture.bindtexture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041957 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.text"
        "ure.compressedteximage2d_invalid_target",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041958 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.text"
        "ure.compressedteximage2d_invalid_format",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041959 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.t"
        "exture.compressedteximage2d_neg_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041960 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.t"
        "exture.compressedteximage2d_max_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041961 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.textu"
        "re.compressedteximage2d_neg_width_height",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041962 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.textu"
        "re.compressedteximage2d_max_width_height",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041963 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.text"
        "ure.compressedteximage2d_invalid_border",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041964 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.tex"
        "ture.compressedteximage2d_invalid_size",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041965 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.texture"
        ".compressedteximage2d_invalid_buffer_target",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041966 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.textur"
        "e.compressedteximage2d_invalid_astc_target",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041967 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.t"
        "exture.copyteximage2d_invalid_target",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041968 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.t"
        "exture.copyteximage2d_invalid_format",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041969 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.textur"
        "e.copyteximage2d_inequal_width_height_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041970 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_ap"
        "i.texture.copyteximage2d_neg_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041971 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_ap"
        "i.texture.copyteximage2d_max_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041972 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.te"
        "xture.copyteximage2d_neg_width_height",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041973 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.te"
        "xture.copyteximage2d_max_width_height",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041974 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.t"
        "exture.copyteximage2d_invalid_border",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041975 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.textu"
        "re.copyteximage2d_incomplete_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041976 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.te"
        "xture.copytexsubimage2d_invalid_target",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041977 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.copytexsubimage2d_neg_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041978 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.copytexsubimage2d_max_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041979 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.copytexsubimage2d_neg_offset",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041980 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.te"
        "xture.copytexsubimage2d_invalid_offset",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041981 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.tex"
        "ture.copytexsubimage2d_neg_width_height",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041982 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.textur"
        "e.copytexsubimage2d_incomplete_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041983 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negati"
        "ve_api.texture.deletetextures",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041984 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negati"
        "ve_api.texture.generatemipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041985 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negat"
        "ive_api.texture.gentextures",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041986 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negat"
        "ive_api.texture.pixelstorei",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041987 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.nega"
        "tive_api.texture.teximage2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041988 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.text"
        "ure.teximage2d_inequal_width_height_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041989 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_"
        "api.texture.teximage2d_neg_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041990 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_"
        "api.texture.teximage2d_max_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041991 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.teximage2d_neg_width_height",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041992 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.teximage2d_max_width_height",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041993 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api"
        ".texture.teximage2d_invalid_border",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041994 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.te"
        "xture.teximage2d_invalid_buffer_target",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041995 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negati"
        "ve_api.texture.texsubimage2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041996 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_ap"
        "i.texture.texsubimage2d_neg_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041997 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_ap"
        "i.texture.texsubimage2d_max_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041998 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_ap"
        "i.texture.texsubimage2d_neg_offset",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041999 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.texsubimage2d_invalid_offset",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042000 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.t"
        "exture.texsubimage2d_neg_width_height",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042001 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.text"
        "ure.texsubimage2d_invalid_buffer_target",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042002 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negati"
        "ve_api.texture.texparameteri",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042003 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negati"
        "ve_api.texture.texparameterf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042004 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negati"
        "ve_api.texture.texparameteriv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042005 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negati"
        "ve_api.texture.texparameterfv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042006 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_ap"
        "i.texture.compressedtexsubimage2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042007 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.tex"
        "ture.compressedtexsubimage2d_neg_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042008 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.tex"
        "ture.compressedtexsubimage2d_max_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042009 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.tex"
        "ture.compressedtexsubimage2d_neg_offset",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042010 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.textu"
        "re.compressedtexsubimage2d_invalid_offset",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042011 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.textur"
        "e.compressedtexsubimage2d_neg_width_height",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042012 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.text"
        "ure.compressedtexsubimage2d_invalid_size",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042013 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.texture.c"
        "ompressedtexsubimage2d_invalid_buffer_target",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042014 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.nega"
        "tive_api.texture.teximage3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042015 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_"
        "api.texture.teximage3d_neg_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042016 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_"
        "api.texture.teximage3d_max_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042017 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.tex"
        "ture.teximage3d_neg_width_height_depth",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042018 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.tex"
        "ture.teximage3d_max_width_height_depth",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042019 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api"
        ".texture.teximage3d_invalid_border",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042020 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.te"
        "xture.teximage3d_invalid_buffer_target",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042021 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negati"
        "ve_api.texture.texsubimage3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042022 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_ap"
        "i.texture.texsubimage3d_neg_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042023 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_ap"
        "i.texture.texsubimage3d_max_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042024 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_ap"
        "i.texture.texsubimage3d_neg_offset",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042025 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.texsubimage3d_invalid_offset",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042026 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.t"
        "exture.texsubimage3d_neg_width_height",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042027 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.text"
        "ure.texsubimage3d_invalid_buffer_target",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042028 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative"
        "_api.texture.copytexsubimage3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042029 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.copytexsubimage3d_neg_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042030 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.copytexsubimage3d_max_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042031 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.copytexsubimage3d_neg_offset",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042032 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.te"
        "xture.copytexsubimage3d_invalid_offset",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042033 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.tex"
        "ture.copytexsubimage3d_neg_width_height",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042034 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.textur"
        "e.copytexsubimage3d_incomplete_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042035 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_"
        "api.texture.compressedteximage3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042036 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.t"
        "exture.compressedteximage3d_neg_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042037 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.t"
        "exture.compressedteximage3d_max_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042038 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.texture."
        "compressedteximage3d_neg_width_height_depth",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042039 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.texture."
        "compressedteximage3d_max_width_height_depth",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042040 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.text"
        "ure.compressedteximage3d_invalid_border",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042041 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.tex"
        "ture.compressedteximage3d_invalid_size",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042042 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.texture"
        ".compressedteximage3d_invalid_buffer_target",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042043 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_ap"
        "i.texture.compressedtexsubimage3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042044 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.tex"
        "ture.compressedtexsubimage3d_neg_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042045 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.tex"
        "ture.compressedtexsubimage3d_max_level",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042046 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.tex"
        "ture.compressedtexsubimage3d_neg_offset",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042047 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.textu"
        "re.compressedtexsubimage3d_invalid_offset",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042048 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.texture.c"
        "ompressedtexsubimage3d_neg_width_height_depth",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042049 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.text"
        "ure.compressedtexsubimage3d_invalid_size",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042050 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.texture.c"
        "ompressedtexsubimage3d_invalid_buffer_target",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042051 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negat"
        "ive_api.texture.texstorage2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042052 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.texstorage2d_invalid_binding",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042053 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.texstorage2d_invalid_levels",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042054 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api.te"
        "xture.texstorage2d_invalid_astc_target",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042055 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negat"
        "ive_api.texture.texstorage3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042056 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.texstorage3d_invalid_binding",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042057 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.negative_api."
        "texture.texstorage3d_invalid_levels",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042058 end";
}
