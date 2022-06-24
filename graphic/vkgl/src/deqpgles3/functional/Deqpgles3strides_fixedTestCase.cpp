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
#include "../ActsDeqpgles30033TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.user_ptr_stride8_components2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032975 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.user_ptr_stride17_components2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032976 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.user_ptr_stride32_components2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032977 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.fixed.user_ptr_stride8_components2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032978 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.fixed.user_ptr_stride17_components2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032979 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.fixed.user_ptr_stride32_components2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032980 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.user_ptr_stride12_components3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032981 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.user_ptr_stride17_components3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032982 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.user_ptr_stride32_components3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032983 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.fixed.user_ptr_stride12_components3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032984 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.fixed.user_ptr_stride17_components3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032985 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.fixed.user_ptr_stride32_components3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032986 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.user_ptr_stride16_components4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032987 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.user_ptr_stride17_components4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032988 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.user_ptr_stride32_components4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032989 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.fixed.user_ptr_stride16_components4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032990 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.fixed.user_ptr_stride17_components4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032991 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.fixed.user_ptr_stride32_components4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032992 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.fixed.buffer_stride8_components2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032993 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.fixed.buffer_stride32_components2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032994 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.buffer_stride8_components2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032995 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.buffer_stride32_components2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032996 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.fixed.buffer_stride12_components3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032997 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.fixed.buffer_stride32_components3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032998 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.buffer_stride12_components3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032999 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_033000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.buffer_stride32_components3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033000 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_033001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.fixed.buffer_stride16_components4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033001 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_033002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.fixed.buffer_stride32_components4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033002 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_033003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.buffer_stride16_components4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033003 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_033004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.fixed.buffer_stride32_components4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033004 end";
}
