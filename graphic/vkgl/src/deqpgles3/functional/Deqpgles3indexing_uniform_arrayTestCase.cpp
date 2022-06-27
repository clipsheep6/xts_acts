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
#include "../ActsDeqpgles30007TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing"
        ".uniform_array.float_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006015 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing."
        "uniform_array.float_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006016 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing."
        "uniform_array.float_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006017 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.u"
        "niform_array.float_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006018 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.un"
        "iform_array.float_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006019 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.uni"
        "form_array.float_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006020 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.un"
        "iform_array.float_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006021 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.uni"
        "form_array.float_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006022 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing"
        ".uniform_array.vec2_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006023 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing."
        "uniform_array.vec2_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006024 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing"
        ".uniform_array.vec2_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006025 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing."
        "uniform_array.vec2_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006026 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.u"
        "niform_array.vec2_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006027 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.un"
        "iform_array.vec2_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006028 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.un"
        "iform_array.vec2_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006029 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.uni"
        "form_array.vec2_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006030 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing"
        ".uniform_array.vec3_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006031 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing."
        "uniform_array.vec3_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006032 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing"
        ".uniform_array.vec3_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006033 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing."
        "uniform_array.vec3_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006034 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.u"
        "niform_array.vec3_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006035 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.un"
        "iform_array.vec3_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006036 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.un"
        "iform_array.vec3_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006037 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.uni"
        "form_array.vec3_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006038 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing"
        ".uniform_array.vec4_static_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006039 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing."
        "uniform_array.vec4_static_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006040 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing"
        ".uniform_array.vec4_dynamic_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006041 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing."
        "uniform_array.vec4_dynamic_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006042 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.u"
        "niform_array.vec4_static_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006043 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.un"
        "iform_array.vec4_static_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006044 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.un"
        "iform_array.vec4_dynamic_loop_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006045 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.uni"
        "form_array.vec4_dynamic_loop_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006046 end";
}
