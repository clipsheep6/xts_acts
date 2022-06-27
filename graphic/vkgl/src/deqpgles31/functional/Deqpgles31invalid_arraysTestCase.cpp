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
#include "../ActsDeqpgles310007TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conve"
        "rsions.es31.invalid.arrays.int_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006101 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.arrays.int_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006102 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conve"
        "rsions.es31.invalid.arrays.int_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006103 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.arrays.int_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006104 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.arrays.uint_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006105 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.arrays.uint_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006106 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.arrays.ivec2_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006107 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.arrays.ivec2_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006108 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.arrays.ivec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006109 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.arrays.ivec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006110 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.arrays.uvec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006111 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.arrays.uvec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006112 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006113, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006113 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.arrays.ivec3_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006113 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006113 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006114, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006114 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.arrays.ivec3_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006114 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006114 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006115, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006115 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.arrays.ivec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006115 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006115 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006116, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006116 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.arrays.ivec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006116 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006116 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006117, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006117 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.arrays.uvec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006117 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006117 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006118, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006118 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.arrays.uvec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006118 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006118 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006119, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006119 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.arrays.ivec4_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006119 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006119 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006120, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006120 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.arrays.ivec4_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006120 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006120 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006121, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006121 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.arrays.ivec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006121 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006121 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006122, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006122 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.arrays.ivec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006122 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006122 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006123, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006123 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.arrays.uvec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006123 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006123 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006124, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006124 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.arrays.uvec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006124 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006124 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conve"
        "rsions.es32.invalid.arrays.int_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007135 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.arrays.int_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007136 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conve"
        "rsions.es32.invalid.arrays.int_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007137 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.arrays.int_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007138 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.arrays.uint_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007139 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.arrays.uint_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007140 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.arrays.ivec2_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007141 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.arrays.ivec2_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007142 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.arrays.ivec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007143 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.arrays.ivec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007144 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.arrays.uvec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007145 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.arrays.uvec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007146 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.arrays.ivec3_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007147 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.arrays.ivec3_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007148 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.arrays.ivec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007149 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.arrays.ivec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007150 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.arrays.uvec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007151 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.arrays.uvec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007152 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.arrays.ivec4_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007153 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.arrays.ivec4_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007154 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.arrays.ivec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007155 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.arrays.ivec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007156 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.arrays.uvec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007157 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.arrays.uvec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007158 end";
}
