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
#include "../ActsDeqpgles30002TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.float_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001627 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.float_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001628 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.float_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001629 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.float_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001630 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.float_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001631 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.float_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001632 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.float_to_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001633 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversions"
        ".scalar_to_vector.float_to_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001634 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.float_to_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001635 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversions"
        ".scalar_to_vector.float_to_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001636 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.float_to_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001637 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversions"
        ".scalar_to_vector.float_to_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001638 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.float_to_bvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001639 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversions"
        ".scalar_to_vector.float_to_bvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001640 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.float_to_bvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001641 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversions"
        ".scalar_to_vector.float_to_bvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001642 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.float_to_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001643 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversions"
        ".scalar_to_vector.float_to_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001644 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversi"
        "ons.scalar_to_vector.int_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001645 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.int_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001646 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversi"
        "ons.scalar_to_vector.int_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001647 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.int_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001648 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversi"
        "ons.scalar_to_vector.int_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001649 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.int_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001650 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.int_to_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001651 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.int_to_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001652 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.int_to_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001653 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.int_to_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001654 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.int_to_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001655 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.int_to_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001656 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.int_to_bvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001657 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.int_to_bvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001658 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.int_to_bvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001659 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.int_to_bvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001660 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.int_to_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001661 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.int_to_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001662 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.uint_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001663 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.uint_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001664 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.uint_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001665 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.uint_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001666 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.uint_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001667 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.uint_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001668 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.uint_to_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001669 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.uint_to_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001670 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.uint_to_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001671 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.uint_to_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001672 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.uint_to_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001673 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.uint_to_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001674 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.uint_to_bvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001675 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.uint_to_bvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001676 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.uint_to_bvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001677 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.uint_to_bvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001678 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.uint_to_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001679 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.uint_to_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001680 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.bool_to_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001681 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.bool_to_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001682 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.bool_to_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001683 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.bool_to_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001684 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.bool_to_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001685 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.bool_to_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001686 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.bool_to_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001687 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.bool_to_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001688 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.bool_to_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001689 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.bool_to_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001690 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.bool_to_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001691 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.bool_to_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001692 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.bool_to_bvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001693 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.bool_to_bvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001694 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.bool_to_bvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001695 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.bool_to_bvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001696 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.bool_to_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001697 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.bool_to_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001698 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.float_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001699 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversions"
        ".scalar_to_vector.float_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001700 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.float_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001701 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversions"
        ".scalar_to_vector.float_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001702 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.float_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001703 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversions"
        ".scalar_to_vector.float_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001704 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.int_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001705 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.int_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001706 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.int_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001707 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.int_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001708 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.int_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001709 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.int_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001710 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.uint_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001711 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.uint_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001712 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.uint_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001713 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.uint_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001714 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.uint_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001715 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.uint_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001716 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.bool_to_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001717 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.bool_to_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001718 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.bool_to_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001719 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.bool_to_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001720 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_vector.bool_to_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001721 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_vector.bool_to_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001722 end";
}
