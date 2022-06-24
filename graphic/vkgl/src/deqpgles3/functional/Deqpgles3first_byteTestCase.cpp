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
#include "../ActsDeqpgles30034TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.first.byte.first6_offset1_stride2_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033637 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first24_offset1_stride2_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033638 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first6_offset1_stride17_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033639 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first24_offset1_stride17_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033640 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first6_offset1_stride32_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033641 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first24_offset1_stride32_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033642 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first6_offset1_stride2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033643 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first24_offset1_stride2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033644 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first6_offset1_stride17_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033645 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first24_offset1_stride17_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033646 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first6_offset1_stride32_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033647 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first24_offset1_stride32_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033648 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first6_offset16_stride2_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033649 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first24_offset16_stride2_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033650 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first6_offset16_stride17_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033651 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first24_offset16_stride17_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033652 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first6_offset16_stride32_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033653 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first24_offset16_stride32_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033654 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first6_offset16_stride2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033655 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first24_offset16_stride2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033656 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first6_offset16_stride17_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033657 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attrib"
        "ute.first.byte.first24_offset16_stride17_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033658 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first6_offset16_stride32_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033659 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attrib"
        "ute.first.byte.first24_offset16_stride32_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033660 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first6_offset17_stride2_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033661 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first24_offset17_stride2_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033662 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first6_offset17_stride17_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033663 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first24_offset17_stride17_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033664 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.first.byte.first6_offset17_stride32_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033665 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first24_offset17_stride32_quads5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033666 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first6_offset17_stride2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033667 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first24_offset17_stride2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033668 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first6_offset17_stride17_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033669 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attrib"
        "ute.first.byte.first24_offset17_stride17_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033670 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attri"
        "bute.first.byte.first6_offset17_stride32_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033671 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attrib"
        "ute.first.byte.first24_offset17_stride32_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033672 end";
}
