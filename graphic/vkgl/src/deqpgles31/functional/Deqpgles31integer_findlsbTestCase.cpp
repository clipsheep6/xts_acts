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
#include "../ActsDeqpgles310002TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.integer.findlsb.int_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001809 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.int_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001810 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.int_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001811 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.int_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001812 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.int_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001813 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.integer.findlsb.int_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001814 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.int_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001815 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.int_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001816 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.int_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001817 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.int_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001818 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.int_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001819 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.int_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001820 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.integer.findlsb.int_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001821 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.int_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001822 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.int_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001823 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.int_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001824 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.int_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001825 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.int_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001826 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.ivec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001827 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001828 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec2_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001829 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.ivec2_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001830 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec2_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001831 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.ivec2_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001832 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001833 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.ivec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001834 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.ivec2_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001835 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findlsb.ivec2_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001836 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.ivec2_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001837 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.ivec2_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001838 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.ivec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001839 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001840 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec2_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001841 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.ivec2_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001842 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.ivec2_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001843 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec2_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001844 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.ivec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001845 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001846 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec3_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001847 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.ivec3_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001848 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec3_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001849 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.ivec3_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001850 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001851 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.ivec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001852 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.ivec3_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001853 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findlsb.ivec3_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001854 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.ivec3_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001855 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.ivec3_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001856 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.ivec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001857 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001858 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec3_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001859 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.ivec3_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001860 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.ivec3_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001861 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec3_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001862 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.ivec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001863 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001864 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec4_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001865 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.ivec4_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001866 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec4_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001867 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.ivec4_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001868 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001869 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.ivec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001870 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.ivec4_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001871 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findlsb.ivec4_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001872 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.ivec4_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001873 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.ivec4_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001874 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.ivec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001875 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001876 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec4_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001877 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.ivec4_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001878 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.ivec4_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001879 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.ivec4_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001880 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.integer.findlsb.uint_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001881 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uint_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001882 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uint_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001883 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uint_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001884 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uint_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001885 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uint_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001886 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uint_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001887 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uint_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001888 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uint_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001889 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findlsb.uint_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001890 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uint_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001891 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uint_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001892 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uint_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001893 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uint_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001894 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uint_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001895 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.uint_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001896 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uint_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001897 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uint_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001898 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uvec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001899 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001900 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec2_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001901 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.uvec2_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001902 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec2_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001903 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uvec2_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001904 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001905 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uvec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001906 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uvec2_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001907 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findlsb.uvec2_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001908 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.uvec2_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001909 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uvec2_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001910 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uvec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001911 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001912 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec2_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001913 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.uvec2_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001914 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uvec2_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001915 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec2_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001916 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uvec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001917 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001918 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec3_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001919 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.uvec3_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001920 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec3_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001921 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uvec3_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001922 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001923 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uvec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001924 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uvec3_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001925 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findlsb.uvec3_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001926 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.uvec3_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001927 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uvec3_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001928 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uvec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001929 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001930 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec3_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001931 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.uvec3_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001932 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uvec3_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001933 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec3_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001934 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uvec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001935 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001936 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec4_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001937 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.uvec4_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001938 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec4_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001939 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uvec4_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001940 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001941 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uvec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001942 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uvec4_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001943 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.integer.findlsb.uvec4_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001944 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.uvec4_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001945 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uvec4_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001946 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.integer.findlsb.uvec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001947 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001948 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec4_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001949 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.integer.findlsb.uvec4_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001950 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.integer.findlsb.uvec4_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001951 end";
}

static HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.integer.findlsb.uvec4_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001952 end";
}
