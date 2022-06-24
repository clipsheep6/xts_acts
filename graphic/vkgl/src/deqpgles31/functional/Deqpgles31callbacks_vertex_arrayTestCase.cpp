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
#include "../ActsDeqpgles310019TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.callbacks.vertex_array.vertex_attribf",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018608 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.callbacks.vertex_array.vertex_attribfv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018609 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cove"
        "rage.callbacks.vertex_array.vertex_attribi4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018610 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.callbacks.vertex_array.vertex_attribi4v",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018611 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.vertex_array.vertex_attrib_pointer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018612 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage"
        ".callbacks.vertex_array.vertex_attrib_i_pointer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018613 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.vertex_array.vertex_attrib_format",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018614 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage"
        ".callbacks.vertex_array.vertex_attrib_i_format",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018615 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.c"
        "allbacks.vertex_array.enable_vertex_attrib_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018616 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.c"
        "allbacks.vertex_array.disable_vertex_attrib_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018617 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.callbacks.vertex_array.gen_vertex_arrays",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018618 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cover"
        "age.callbacks.vertex_array.bind_vertex_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018619 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.vertex_array.delete_vertex_arrays",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018620 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.vertex_array.vertex_attrib_divisor",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018621 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_co"
        "verage.callbacks.vertex_array.draw_arrays",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018622 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.c"
        "allbacks.vertex_array.draw_arrays_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018623 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.call"
        "backs.vertex_array.draw_arrays_incomplete_primitive",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018624 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_cov"
        "erage.callbacks.vertex_array.draw_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018625 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage."
        "callbacks.vertex_array.draw_elements_base_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018626 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.callbacks.ve"
        "rtex_array.draw_elements_base_vertex_primitive_mode_mismatch",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018627 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.ca"
        "llbacks.vertex_array.draw_elements_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018628 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.callb"
        "acks.vertex_array.draw_elements_incomplete_primitive",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018629 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverag"
        "e.callbacks.vertex_array.draw_arrays_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018630 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.callba"
        "cks.vertex_array.draw_arrays_instanced_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018631 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.callbacks"
        ".vertex_array.draw_arrays_instanced_incomplete_primitive",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018632 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage"
        ".callbacks.vertex_array.draw_elements_instanced",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018633 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.callbac"
        "ks.vertex_array.draw_elements_instanced_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018634 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.callbacks."
        "vertex_array.draw_elements_instanced_incomplete_primitive",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018635 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.callb"
        "acks.vertex_array.draw_elements_instanced_base_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018636 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.callbacks.vertex_"
        "array.draw_elements_instanced_base_vertex_primitive_mode_mismatch",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018637 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_covera"
        "ge.callbacks.vertex_array.draw_range_elements",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018638 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.callb"
        "acks.vertex_array.draw_range_elements_invalid_program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018639 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.callback"
        "s.vertex_array.draw_range_elements_incomplete_primitive",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018640 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.cal"
        "lbacks.vertex_array.draw_range_elements_base_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018641 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.negative_coverage.callbacks.verte"
        "x_array.draw_range_elements_base_vertex_primitive_mode_mismatch",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018642 end";
}
