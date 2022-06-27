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

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.usages.stream_copy.stride0_float_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033459 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.usages.stream_copy.stride8_float_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033460 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.usages.stream_copy.stride32_float_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033461 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.usages.stream_copy.stride0_float_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033462 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.usages.stream_copy.stride8_float_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033463 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.usages.stream_copy.stride32_float_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033464 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.usages.stream_copy.stride0_fixed_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033465 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.usages.stream_copy.stride8_fixed_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033466 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.usages.stream_copy.stride32_fixed_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033467 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.usages.stream_copy.stride0_fixed_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033468 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.usages.stream_copy.stride8_fixed_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033469 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.usages.stream_copy.stride32_fixed_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033470 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.usages.stream_copy.stride0_short_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033471 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.usages.stream_copy.stride4_short_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033472 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.usages.stream_copy.stride32_short_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033473 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.usages.stream_copy.stride0_short_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033474 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.usages.stream_copy.stride4_short_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033475 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.usages.stream_copy.stride32_short_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033476 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_at"
        "tribute.usages.stream_copy.stride0_byte_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033477 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_at"
        "tribute.usages.stream_copy.stride2_byte_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033478 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.usages.stream_copy.stride17_byte_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033479 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.usages.stream_copy.stride32_byte_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033480 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.usages.stream_copy.stride0_byte_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033481 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_att"
        "ribute.usages.stream_copy.stride2_byte_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033482 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.usages.stream_copy.stride17_byte_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033483 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attr"
        "ibute.usages.stream_copy.stride32_byte_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033484 end";
}
