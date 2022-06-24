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
#include "../ActsDeqpgles30039TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038422 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038423 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038424 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038425 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038426 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038427 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038428 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.at"
        "tribute_location.bind.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038429 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038430 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038431 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038432 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038433 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038434 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038435 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.att"
        "ribute_location.bind.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038436 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.attr"
        "ibute_location.bind.mat2x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038437 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.attr"
        "ibute_location.bind.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038438 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.attr"
        "ibute_location.bind.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038439 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.attr"
        "ibute_location.bind.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038440 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.attr"
        "ibute_location.bind.mat3x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038441 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.attr"
        "ibute_location.bind.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038442 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.attr"
        "ibute_location.bind.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038443 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.attr"
        "ibute_location.bind.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038444 end";
}

static HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.attr"
        "ibute_location.bind.mat4x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30039TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30039TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30039TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30039TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30039TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038445 end";
}
