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

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.byte.user_ptr_stride2_components2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032939 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.user_ptr_stride17_components2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032940 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.user_ptr_stride32_components2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032941 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.user_ptr_stride2_components2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032942 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.byte.user_ptr_stride17_components2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032943 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.byte.user_ptr_stride32_components2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032944 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.byte.user_ptr_stride3_components3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032945 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.user_ptr_stride17_components3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032946 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.user_ptr_stride32_components3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032947 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.user_ptr_stride3_components3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032948 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.byte.user_ptr_stride17_components3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032949 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.byte.user_ptr_stride32_components3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032950 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.byte.user_ptr_stride4_components4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032951 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.user_ptr_stride17_components4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032952 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.user_ptr_stride32_components4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032953 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.user_ptr_stride4_components4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032954 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.byte.user_ptr_stride17_components4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032955 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribute"
        ".strides.byte.user_ptr_stride32_components4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032956 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attrib"
        "ute.strides.byte.buffer_stride2_components2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032957 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.byte.buffer_stride17_components2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032958 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.byte.buffer_stride32_components2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032959 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.byte.buffer_stride2_components2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032960 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.buffer_stride17_components2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032961 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.buffer_stride32_components2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032962 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attrib"
        "ute.strides.byte.buffer_stride3_components3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032963 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.byte.buffer_stride17_components3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032964 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.byte.buffer_stride32_components3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032965 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.byte.buffer_stride3_components3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032966 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.buffer_stride17_components3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032967 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.buffer_stride32_components3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032968 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attrib"
        "ute.strides.byte.buffer_stride4_components4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032969 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.byte.buffer_stride17_components4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032970 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.byte.buffer_stride32_components4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032971 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribu"
        "te.strides.byte.buffer_stride4_components4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032972 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.buffer_stride17_components4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032973 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_attribut"
        "e.strides.byte.buffer_stride32_components4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032974 end";
}
