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
#include "../ActsDeqpgles30035TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034852 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034853 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034854 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034855 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034856 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.shared.vec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034857 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034858 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034859 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.shared.vec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034860 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034861 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034862 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.shared.vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034863 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034864 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034865 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.shared.int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034866 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034867 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034868 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.ivec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034869 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034870 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034871 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.ivec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034872 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034873 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034874 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034875 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034876 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034877 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.shared.uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034878 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034879 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034880 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.uvec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034881 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034882 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034883 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.uvec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034884 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034885 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034886 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034887 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.bool_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034888 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.bool_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034889 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.shared.bool_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034890 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.bvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034891 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.bvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034892 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.bvec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034893 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.bvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034894 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.bvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034895 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.bvec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034896 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034897 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034898 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034899 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034900 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034901 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.shared.mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034902 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.shared.row_major_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034903 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.shared.row_major_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034904 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_array.shared.row_major_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034905 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.column_major_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034906 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.shared.column_major_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034907 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.shared.column_major_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034908 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034909 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034910 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.shared.mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034911 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.shared.row_major_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034912 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.shared.row_major_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034913 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_array.shared.row_major_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034914 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.column_major_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034915 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.shared.column_major_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034916 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.shared.column_major_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034917 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034918 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034919 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_array.shared.mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034920 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.shared.row_major_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034921 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.shared.row_major_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034922 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_array.shared.row_major_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034923 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.column_major_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034924 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.shared.column_major_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034925 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.shared.column_major_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034926 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034927 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034928 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034929 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.shared.row_major_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034930 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.row_major_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034931 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.shared.row_major_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034932 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.shared.column_major_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034933 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_a"
        "rray.shared.column_major_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034934 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.column_major_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034935 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034936 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034937 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034938 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.shared.row_major_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034939 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.row_major_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034940 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.shared.row_major_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034941 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.shared.column_major_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034942 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_a"
        "rray.shared.column_major_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034943 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.column_major_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034944 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034945 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034946 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034947 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.shared.row_major_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034948 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.row_major_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034949 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.shared.row_major_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034950 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.shared.column_major_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034951 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_a"
        "rray.shared.column_major_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034952 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.column_major_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034953 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034954 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034955 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034956 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.shared.row_major_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034957 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.row_major_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034958 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.shared.row_major_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034959 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.shared.column_major_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034960 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_a"
        "rray.shared.column_major_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034961 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.column_major_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034962 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034963 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034964 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034965 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.shared.row_major_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034966 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.row_major_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034967 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.shared.row_major_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034968 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.shared.column_major_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034969 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_a"
        "rray.shared.column_major_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034970 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.column_major_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034971 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_array.shared.mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034972 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_array.shared.mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034973 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_array.shared.mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034974 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_array.shared.row_major_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034975 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.row_major_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034976 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_array.shared.row_major_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034977 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "array.shared.column_major_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034978 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_a"
        "rray.shared.column_major_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034979 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_array.shared.column_major_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034980 end";
}
