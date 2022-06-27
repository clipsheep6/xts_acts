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
#include "../ActsDeqpgles30036TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035067 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035068 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035069 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035070 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035071 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.std140.vec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035072 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035073 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035074 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.std140.vec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035075 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035076 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035077 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.std140.vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035078 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035079 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035080 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.std140.int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035081 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035082 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035083 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.ivec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035084 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035085 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035086 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.ivec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035087 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035088 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035089 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035090 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035091 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035092 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.std140.uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035093 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035094 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035095 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.uvec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035096 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035097, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035097 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035097 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035097 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035098 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035099, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035099 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.uvec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035099 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035099 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035100, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035100 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035100 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035100 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035101 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035102 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.bool_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035103 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.bool_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035104 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.std140.bool_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035105 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.bvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035106 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.bvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035107 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.bvec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035108 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.bvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035109 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.bvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035110 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.bvec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035111 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035112 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035113, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035113 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035113 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035113 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035114, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035114 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035114 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035114 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035115, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035115 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035115 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035115 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035116, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035116 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035116 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035116 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035117, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035117 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.std140.mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035117 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035117 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035118, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035118 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.std140.row_major_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035118 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035118 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035119, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035119 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.std140.row_major_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035119 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035119 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035120, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035120 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_array.std140.row_major_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035120 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035120 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035121, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035121 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.column_major_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035121 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035121 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035122, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035122 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.std140.column_major_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035122 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035122 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035123, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035123 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.std140.column_major_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035123 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035123 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035124, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035124 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035124 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035124 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035125 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.std140.mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035126 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.std140.row_major_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035127 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.std140.row_major_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035128 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_array.std140.row_major_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035129 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.column_major_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035130 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.std140.column_major_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035131 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.std140.column_major_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035132 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035133 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035134 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.std140.mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035135 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.std140.row_major_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035136 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.std140.row_major_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035137 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_array.std140.row_major_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035138 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.column_major_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035139 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.std140.column_major_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035140 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.std140.column_major_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035141 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035142 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035143 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035144 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.std140.row_major_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035145 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.row_major_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035146 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.std140.row_major_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035147 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.std140.column_major_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035148 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_a"
        "rray.std140.column_major_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035149 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.column_major_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035150 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035151 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035152 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035153 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.std140.row_major_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035154 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.row_major_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035155 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.std140.row_major_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035156 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.std140.column_major_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035157 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_a"
        "rray.std140.column_major_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035158 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.column_major_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035159 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035160 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035161 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035162 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.std140.row_major_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035163 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.row_major_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035164 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.std140.row_major_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035165 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.std140.column_major_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035166 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_a"
        "rray.std140.column_major_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035167 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.column_major_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035168 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035169 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035170 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035171 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.std140.row_major_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035172 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.row_major_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035173 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.std140.row_major_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035174 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.std140.column_major_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035175 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_a"
        "rray.std140.column_major_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035176 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.column_major_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035177 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035178 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035179 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035180 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.std140.row_major_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035181 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.row_major_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035182 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.std140.row_major_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035183 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.std140.column_major_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035184 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_a"
        "rray.std140.column_major_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035185 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.column_major_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035186 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.std140.mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035187 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.std140.mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035188 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.std140.mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035189 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.std140.row_major_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035190 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.row_major_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035191 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.std140.row_major_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035192 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.std140.column_major_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035193 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_a"
        "rray.std140.column_major_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035194 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.std140.column_major_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035195 end";
}
