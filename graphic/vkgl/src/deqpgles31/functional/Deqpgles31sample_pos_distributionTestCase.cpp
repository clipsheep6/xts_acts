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
#include "../ActsDeqpgles310003TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variabl"
        "es.sample_pos.distribution.default_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002970 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variable"
        "s.sample_pos.distribution.singlesample_texture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002971 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variable"
        "s.sample_pos.distribution.multisample_texture_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002972 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variable"
        "s.sample_pos.distribution.multisample_texture_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002973 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variable"
        "s.sample_pos.distribution.multisample_texture_4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002974 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variable"
        "s.sample_pos.distribution.multisample_texture_8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002975 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variables"
        ".sample_pos.distribution.multisample_texture_16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002976 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variab"
        "les.sample_pos.distribution.singlesample_rbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002977 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variab"
        "les.sample_pos.distribution.multisample_rbo_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002978 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variab"
        "les.sample_pos.distribution.multisample_rbo_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002979 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variab"
        "les.sample_pos.distribution.multisample_rbo_4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002980 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variab"
        "les.sample_pos.distribution.multisample_rbo_8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002981 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.sample_variabl"
        "es.sample_pos.distribution.multisample_rbo_16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002982 end";
}
