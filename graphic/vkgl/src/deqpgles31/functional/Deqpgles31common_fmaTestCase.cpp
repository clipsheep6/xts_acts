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
#include "../ActsDeqpgles310001TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin"
        "_functions.common.fma.float_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000877 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.float_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000878 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.float_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000879 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.fma.float_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000880 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.float_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000881 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.float_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000882 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.float_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000883 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.fma.float_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000884 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.fma.float_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000885 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.common.fma.float_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000886 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.fma.float_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000887 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.float_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000888 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.float_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000889 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.float_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000890 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.float_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000891 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.fma.float_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000892 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.float_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000893 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.float_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000894 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin"
        "_functions.common.fma.vec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000895 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000896 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec2_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000897 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.fma.vec2_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000898 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec2_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000899 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin"
        "_functions.common.fma.vec2_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000900 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000901 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.vec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000902 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.vec2_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000903 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.fma.vec2_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000904 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.fma.vec2_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000905 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.vec2_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000906 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin"
        "_functions.common.fma.vec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000907 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000908 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec2_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000909 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.fma.vec2_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000910 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.vec2_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000911 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec2_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000912 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin"
        "_functions.common.fma.vec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000913 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000914 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec3_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000915 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.fma.vec3_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000916 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec3_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000917 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin"
        "_functions.common.fma.vec3_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000918 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000919 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.vec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000920 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.vec3_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000921 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.fma.vec3_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000922 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.fma.vec3_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000923 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.vec3_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000924 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin"
        "_functions.common.fma.vec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000925 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000926 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec3_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000927 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.fma.vec3_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000928 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.vec3_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000929 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec3_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000930 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin"
        "_functions.common.fma.vec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000931 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000932 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec4_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000933 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.fma.vec4_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000934 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec4_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000935 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin"
        "_functions.common.fma.vec4_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000936 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000937 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.vec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000938 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.vec4_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000939 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.fma.vec4_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000940 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.fma.vec4_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000941 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.vec4_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000942 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin"
        "_functions.common.fma.vec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000943 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000944 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec4_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000945 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.fma.vec4_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000946 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.fma.vec4_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000947 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.fma.vec4_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000948 end";
}
