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
#include "../ActsDeqpgles310009TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.lowp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008453 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008454 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008455 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.packed.lowp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008456 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008457 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008458 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.packed.lowp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008459 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008460 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008461 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.packed.lowp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008462 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008463 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008464 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.packed.lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008465 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008466 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.packed.highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008467 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008468 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008469 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008470 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008471 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008472 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008473 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008474 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008475 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008476 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.packed.lowp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008477 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008478 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008479 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.lowp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008480 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008481 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008482 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.lowp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008483 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008484 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008485 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.lowp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008486 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008487 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008488 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.single_basic_type.packed.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008489 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.single_basic_type.packed.bvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008490 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.single_basic_type.packed.bvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008491 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.single_basic_type.packed.bvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008492 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.packed.lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008493 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008494 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008495 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.sing"
        "le_basic_type.packed.row_major_lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008496 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.row_major_mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008497 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.packed.row_major_highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008498 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.column_major_lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008499 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008500 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.column_major_highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008501 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.packed.lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008502 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008503 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008504 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.sing"
        "le_basic_type.packed.row_major_lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008505 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.row_major_mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008506 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.packed.row_major_highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008507 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.column_major_lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008508 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008509 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.column_major_highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008510 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".single_basic_type.packed.lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008511 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008512 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008513 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.sing"
        "le_basic_type.packed.row_major_lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008514 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.row_major_mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008515 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.packed.row_major_highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008516 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.column_major_lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008517 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008518 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.column_major_highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008519 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008520 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.si"
        "ngle_basic_type.packed.mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008521 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008522 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.packed.row_major_lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008523 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.row_major_mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008524 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.row_major_highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008525 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008526 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_b"
        "asic_type.packed.column_major_mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008527 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008528 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008529 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.si"
        "ngle_basic_type.packed.mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008530 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008531 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.packed.row_major_lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008532 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.row_major_mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008533 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.row_major_highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008534 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008535 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_b"
        "asic_type.packed.column_major_mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008536 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008537 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008538 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.si"
        "ngle_basic_type.packed.mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008539 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008540 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.packed.row_major_lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008541 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.row_major_mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008542 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.row_major_highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008543 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008544 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_b"
        "asic_type.packed.column_major_mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008545 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008546 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008547 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.si"
        "ngle_basic_type.packed.mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008548 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008549 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.packed.row_major_lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008550 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.row_major_mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008551 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.row_major_highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008552 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008553 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_b"
        "asic_type.packed.column_major_mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008554 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008555 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008556 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.si"
        "ngle_basic_type.packed.mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008557 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008558 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.packed.row_major_lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008559 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.row_major_mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008560 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.row_major_highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008561 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008562 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_b"
        "asic_type.packed.column_major_mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008563 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008564 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "single_basic_type.packed.lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008565 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.si"
        "ngle_basic_type.packed.mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008566 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.s"
        "ingle_basic_type.packed.highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008567 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.singl"
        "e_basic_type.packed.row_major_lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008568 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.row_major_mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008569 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single"
        "_basic_type.packed.row_major_highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008570 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008571 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_b"
        "asic_type.packed.column_major_mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008572 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.single_"
        "basic_type.packed.column_major_highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008573 end";
}
