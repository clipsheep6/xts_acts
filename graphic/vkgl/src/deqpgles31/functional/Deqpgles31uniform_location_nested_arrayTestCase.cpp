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

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018034 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018035 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018036 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018037 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018038 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018039 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018040 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018041 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_"
        "location.nested_array.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018042 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018043 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018044 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018045 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018046 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018047 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018048 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018049 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018050 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018051 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018052 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018053 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018054 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018055 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018056 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018057 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.bool_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018058 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.bool_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018059 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.bvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018060 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.bvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018061 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.bvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018062 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.bvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018063 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018064 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018065 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018066 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018067 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018068 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_loc"
        "ation.nested_array.mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018069 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018070 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_loc"
        "ation.nested_array.mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018071 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018072 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_loc"
        "ation.nested_array.mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018073 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018074 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018075 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018076 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_loc"
        "ation.nested_array.mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018077 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018078 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_loc"
        "ation.nested_array.mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018079 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018080 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_loc"
        "ation.nested_array.mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018081 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_l"
        "ocation.nested_array.mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018082 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_lo"
        "cation.nested_array.mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018083 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_loc"
        "ation.nested_array.sampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018084 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_loca"
        "tion.nested_array.sampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018085 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_loca"
        "tion.nested_array.isampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018086 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_locat"
        "ion.nested_array.isampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018087 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_loca"
        "tion.nested_array.usampler2D_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018088 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.uniform_locat"
        "ion.nested_array.usampler2D_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018089 end";
}
