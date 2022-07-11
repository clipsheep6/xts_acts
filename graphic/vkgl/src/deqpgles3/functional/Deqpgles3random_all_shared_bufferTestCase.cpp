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

<<<<<<< HEAD
#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30037TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_036191_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036191_2 "random.all_shared_buffer.0"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036191, VkglTestCase_036191_1, VkglTestCase_036191_2);

#define VkglTestCase_036192_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036192_2 "random.all_shared_buffer.1"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036192, VkglTestCase_036192_1, VkglTestCase_036192_2);

#define VkglTestCase_036193_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036193_2 "random.all_shared_buffer.2"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036193, VkglTestCase_036193_1, VkglTestCase_036193_2);

#define VkglTestCase_036194_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036194_2 "random.all_shared_buffer.3"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036194, VkglTestCase_036194_1, VkglTestCase_036194_2);

#define VkglTestCase_036195_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036195_2 "random.all_shared_buffer.4"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036195, VkglTestCase_036195_1, VkglTestCase_036195_2);

#define VkglTestCase_036196_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036196_2 "random.all_shared_buffer.5"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036196, VkglTestCase_036196_1, VkglTestCase_036196_2);

#define VkglTestCase_036197_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036197_2 "random.all_shared_buffer.6"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036197, VkglTestCase_036197_1, VkglTestCase_036197_2);

#define VkglTestCase_036198_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036198_2 "random.all_shared_buffer.7"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036198, VkglTestCase_036198_1, VkglTestCase_036198_2);

#define VkglTestCase_036199_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036199_2 "random.all_shared_buffer.8"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036199, VkglTestCase_036199_1, VkglTestCase_036199_2);

#define VkglTestCase_036200_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036200_2 "random.all_shared_buffer.9"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036200, VkglTestCase_036200_1, VkglTestCase_036200_2);

#define VkglTestCase_036201_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036201_2 "random.all_shared_buffer.10"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036201, VkglTestCase_036201_1, VkglTestCase_036201_2);

#define VkglTestCase_036202_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036202_2 "random.all_shared_buffer.11"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036202, VkglTestCase_036202_1, VkglTestCase_036202_2);

#define VkglTestCase_036203_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036203_2 "random.all_shared_buffer.12"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036203, VkglTestCase_036203_1, VkglTestCase_036203_2);

#define VkglTestCase_036204_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036204_2 "random.all_shared_buffer.13"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036204, VkglTestCase_036204_1, VkglTestCase_036204_2);

#define VkglTestCase_036205_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036205_2 "random.all_shared_buffer.14"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036205, VkglTestCase_036205_1, VkglTestCase_036205_2);

#define VkglTestCase_036206_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036206_2 "random.all_shared_buffer.15"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036206, VkglTestCase_036206_1, VkglTestCase_036206_2);

#define VkglTestCase_036207_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036207_2 "random.all_shared_buffer.16"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036207, VkglTestCase_036207_1, VkglTestCase_036207_2);

#define VkglTestCase_036208_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036208_2 "random.all_shared_buffer.17"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036208, VkglTestCase_036208_1, VkglTestCase_036208_2);

#define VkglTestCase_036209_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036209_2 "random.all_shared_buffer.18"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036209, VkglTestCase_036209_1, VkglTestCase_036209_2);

#define VkglTestCase_036210_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036210_2 "random.all_shared_buffer.19"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036210, VkglTestCase_036210_1, VkglTestCase_036210_2);

#define VkglTestCase_036211_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036211_2 "random.all_shared_buffer.20"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036211, VkglTestCase_036211_1, VkglTestCase_036211_2);

#define VkglTestCase_036212_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036212_2 "random.all_shared_buffer.21"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036212, VkglTestCase_036212_1, VkglTestCase_036212_2);

#define VkglTestCase_036213_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036213_2 "random.all_shared_buffer.22"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036213, VkglTestCase_036213_1, VkglTestCase_036213_2);

#define VkglTestCase_036214_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036214_2 "random.all_shared_buffer.23"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036214, VkglTestCase_036214_1, VkglTestCase_036214_2);

#define VkglTestCase_036215_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036215_2 "random.all_shared_buffer.24"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036215, VkglTestCase_036215_1, VkglTestCase_036215_2);

#define VkglTestCase_036216_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036216_2 "random.all_shared_buffer.25"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036216, VkglTestCase_036216_1, VkglTestCase_036216_2);

#define VkglTestCase_036217_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036217_2 "random.all_shared_buffer.26"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036217, VkglTestCase_036217_1, VkglTestCase_036217_2);

#define VkglTestCase_036218_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036218_2 "random.all_shared_buffer.27"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036218, VkglTestCase_036218_1, VkglTestCase_036218_2);

#define VkglTestCase_036219_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036219_2 "random.all_shared_buffer.28"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036219, VkglTestCase_036219_1, VkglTestCase_036219_2);

#define VkglTestCase_036220_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036220_2 "random.all_shared_buffer.29"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036220, VkglTestCase_036220_1, VkglTestCase_036220_2);

#define VkglTestCase_036221_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036221_2 "random.all_shared_buffer.30"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036221, VkglTestCase_036221_1, VkglTestCase_036221_2);

#define VkglTestCase_036222_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036222_2 "random.all_shared_buffer.31"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036222, VkglTestCase_036222_1, VkglTestCase_036222_2);

#define VkglTestCase_036223_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036223_2 "random.all_shared_buffer.32"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036223, VkglTestCase_036223_1, VkglTestCase_036223_2);

#define VkglTestCase_036224_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036224_2 "random.all_shared_buffer.33"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036224, VkglTestCase_036224_1, VkglTestCase_036224_2);

#define VkglTestCase_036225_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036225_2 "random.all_shared_buffer.34"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036225, VkglTestCase_036225_1, VkglTestCase_036225_2);

#define VkglTestCase_036226_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036226_2 "random.all_shared_buffer.35"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036226, VkglTestCase_036226_1, VkglTestCase_036226_2);

#define VkglTestCase_036227_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036227_2 "random.all_shared_buffer.36"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036227, VkglTestCase_036227_1, VkglTestCase_036227_2);

#define VkglTestCase_036228_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036228_2 "random.all_shared_buffer.37"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036228, VkglTestCase_036228_1, VkglTestCase_036228_2);

#define VkglTestCase_036229_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036229_2 "random.all_shared_buffer.38"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036229, VkglTestCase_036229_1, VkglTestCase_036229_2);

#define VkglTestCase_036230_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036230_2 "random.all_shared_buffer.39"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036230, VkglTestCase_036230_1, VkglTestCase_036230_2);

#define VkglTestCase_036231_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036231_2 "random.all_shared_buffer.40"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036231, VkglTestCase_036231_1, VkglTestCase_036231_2);

#define VkglTestCase_036232_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036232_2 "random.all_shared_buffer.41"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036232, VkglTestCase_036232_1, VkglTestCase_036232_2);

#define VkglTestCase_036233_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036233_2 "random.all_shared_buffer.42"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036233, VkglTestCase_036233_1, VkglTestCase_036233_2);

#define VkglTestCase_036234_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036234_2 "random.all_shared_buffer.43"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036234, VkglTestCase_036234_1, VkglTestCase_036234_2);

#define VkglTestCase_036235_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036235_2 "random.all_shared_buffer.44"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036235, VkglTestCase_036235_1, VkglTestCase_036235_2);

#define VkglTestCase_036236_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036236_2 "random.all_shared_buffer.45"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036236, VkglTestCase_036236_1, VkglTestCase_036236_2);

#define VkglTestCase_036237_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036237_2 "random.all_shared_buffer.46"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036237, VkglTestCase_036237_1, VkglTestCase_036237_2);

#define VkglTestCase_036238_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036238_2 "random.all_shared_buffer.47"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036238, VkglTestCase_036238_1, VkglTestCase_036238_2);

#define VkglTestCase_036239_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036239_2 "random.all_shared_buffer.48"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036239, VkglTestCase_036239_1, VkglTestCase_036239_2);

#define VkglTestCase_036240_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036240_2 "random.all_shared_buffer.49"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036240, VkglTestCase_036240_1, VkglTestCase_036240_2);
=======
static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036191 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036192 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036193 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036194 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036195 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036196 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036197 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036198 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036199 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036200 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036201 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036202 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036203 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036204 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036205 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036206 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036207 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036208 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036209 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036210 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036211 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036212 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036213 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036214 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036215 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036216 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036217 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036218 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036219 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036220 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036221 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036222 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036223 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036224 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036225 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036226 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036227 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036228 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036229 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036230 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036231 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036232 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036233 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036234 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036235 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036236 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036237 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036238 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036239 end";
}

static HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_036240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo."
        "random.all_shared_buffer.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30037TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30037TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30037TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30037TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30037TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_036240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_036240 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
