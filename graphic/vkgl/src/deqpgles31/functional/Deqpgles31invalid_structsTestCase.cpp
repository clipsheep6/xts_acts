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

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.structs.int_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006125 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.structs.int_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006126 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conve"
        "rsions.es31.invalid.structs.int_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006127 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.structs.int_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006128 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.structs.uint_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006129 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.structs.uint_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006130 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.structs.ivec2_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006131 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversi"
        "ons.es31.invalid.structs.ivec2_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006132 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.structs.ivec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006133 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.structs.ivec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006134 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.structs.uvec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006135 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.structs.uvec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006136 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.structs.ivec3_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006137 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversi"
        "ons.es31.invalid.structs.ivec3_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006138 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.structs.ivec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006139 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.structs.ivec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006140 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.structs.uvec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006141 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.structs.uvec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006142 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.structs.ivec4_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006143 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversi"
        "ons.es31.invalid.structs.ivec4_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006144 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.structs.ivec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006145 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.structs.ivec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006146 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es31.invalid.structs.uvec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006147 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es31.invalid.structs.uvec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006148 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.structs.int_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007159 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.structs.int_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007160 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conve"
        "rsions.es32.invalid.structs.int_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007161 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.structs.int_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007162 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.structs.uint_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007163 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.structs.uint_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007164 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.structs.ivec2_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007165 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversi"
        "ons.es32.invalid.structs.ivec2_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007166 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.structs.ivec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007167 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.structs.ivec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007168 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.structs.uvec2_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007169 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.structs.uvec2_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007170 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.structs.ivec3_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007171 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversi"
        "ons.es32.invalid.structs.ivec3_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007172 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.structs.ivec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007173 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.structs.ivec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007174 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.structs.uvec3_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007175 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.structs.uvec3_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007176 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.structs.ivec4_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007177 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversi"
        "ons.es32.invalid.structs.ivec4_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007178 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.structs.ivec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007179 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.structs.ivec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007180 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conver"
        "sions.es32.invalid.structs.uvec4_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007181 end";
}

static HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_convers"
        "ions.es32.invalid.structs.uvec4_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007182 end";
}
