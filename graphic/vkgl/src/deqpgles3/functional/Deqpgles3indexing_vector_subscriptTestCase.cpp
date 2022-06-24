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

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_"
        "subscript.vec2_direct_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006175 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_s"
        "ubscript.vec2_direct_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006176 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_s"
        "ubscript.vec2_direct_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006177 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_su"
        "bscript.vec2_direct_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006178 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
        "ript.vec2_direct_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006179 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec2_direct_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006180 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
        "ript.vec2_direct_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006181 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec2_direct_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006182 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec2_direct_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006183 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec2_direct_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006184 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec2_direct_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006185 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec2_direct_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006186 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_s"
        "ubscript.vec2_component_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006187 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_su"
        "bscript.vec2_component_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006188 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_sub"
        "script.vec2_component_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006189 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subs"
        "cript.vec2_component_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006190 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec2_component_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006191 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec2_component_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006192 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec2_component_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006193 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec2_component_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006194 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec2_component_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006195 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec2_component_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006196 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec2_component_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006197 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec2_component_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006198 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
        "ript.vec2_static_subscript_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006199 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec2_static_subscript_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006200 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec2_static_subscript_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006201 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec2_static_subscript_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006202 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec2_static_subscript_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006203 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
        "ec2_static_subscript_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006204 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec2_static_subscript_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006205 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
        "ec2_static_subscript_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006206 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
        "c2_static_subscript_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006207 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "2_static_subscript_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006208 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "2_static_subscript_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006209 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2"
        "_static_subscript_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006210 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
        "ript.vec2_dynamic_subscript_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006211 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec2_dynamic_subscript_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006212 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec2_dynamic_subscript_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006213 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec2_dynamic_subscript_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006214 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec2_dynamic_subscript_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006215 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
        "ec2_dynamic_subscript_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006216 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
        "ec2_dynamic_subscript_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006217 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
        "c2_dynamic_subscript_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006218 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "2_dynamic_subscript_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006219 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2"
        "_dynamic_subscript_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006220 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "2_dynamic_subscript_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006221 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2"
        "_dynamic_subscript_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006222 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec2_static_loop_subscript_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006223 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec2_static_loop_subscript_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006224 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec2_static_loop_subscript_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006225 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec2_static_loop_subscript_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006226 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
        "c2_static_loop_subscript_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006227 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "2_static_loop_subscript_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006228 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "2_static_loop_subscript_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006229 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2"
        "_static_loop_subscript_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006230 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_"
        "static_loop_subscript_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006231 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_s"
        "tatic_loop_subscript_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006232 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_"
        "static_loop_subscript_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006233 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_s"
        "tatic_loop_subscript_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006234 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec2_dynamic_loop_subscript_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006235 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec2_dynamic_loop_subscript_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006236 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec2_dynamic_loop_subscript_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006237 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec2_dynamic_loop_subscript_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006238 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "2_dynamic_loop_subscript_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006239 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2"
        "_dynamic_loop_subscript_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006240 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "2_dynamic_loop_subscript_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006241 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2"
        "_dynamic_loop_subscript_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006242 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_"
        "dynamic_loop_subscript_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006243 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_d"
        "ynamic_loop_subscript_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006244 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_d"
        "ynamic_loop_subscript_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006245 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec2_dy"
        "namic_loop_subscript_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006246 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_"
        "subscript.vec3_direct_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006247 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_s"
        "ubscript.vec3_direct_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006248 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_s"
        "ubscript.vec3_direct_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006249 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_su"
        "bscript.vec3_direct_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006250 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
        "ript.vec3_direct_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006251 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec3_direct_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006252 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
        "ript.vec3_direct_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006253 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec3_direct_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006254 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec3_direct_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006255 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec3_direct_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006256 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec3_direct_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006257 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec3_direct_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006258 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_s"
        "ubscript.vec3_component_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006259 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_su"
        "bscript.vec3_component_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006260 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_sub"
        "script.vec3_component_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006261 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subs"
        "cript.vec3_component_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006262 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec3_component_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006263 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec3_component_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006264 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec3_component_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006265 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec3_component_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006266 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec3_component_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006267 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec3_component_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006268 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec3_component_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006269 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec3_component_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006270 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
        "ript.vec3_static_subscript_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006271 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec3_static_subscript_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006272 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec3_static_subscript_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006273 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec3_static_subscript_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006274 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec3_static_subscript_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006275 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
        "ec3_static_subscript_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006276 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec3_static_subscript_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006277 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
        "ec3_static_subscript_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006278 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
        "c3_static_subscript_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006279 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "3_static_subscript_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006280 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "3_static_subscript_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006281 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3"
        "_static_subscript_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006282 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
        "ript.vec3_dynamic_subscript_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006283 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec3_dynamic_subscript_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006284 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec3_dynamic_subscript_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006285 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec3_dynamic_subscript_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006286 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec3_dynamic_subscript_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006287 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
        "ec3_dynamic_subscript_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006288 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
        "ec3_dynamic_subscript_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006289 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
        "c3_dynamic_subscript_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006290 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "3_dynamic_subscript_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006291 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3"
        "_dynamic_subscript_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006292 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "3_dynamic_subscript_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006293 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3"
        "_dynamic_subscript_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006294 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec3_static_loop_subscript_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006295 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec3_static_loop_subscript_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006296 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec3_static_loop_subscript_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006297 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec3_static_loop_subscript_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006298 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
        "c3_static_loop_subscript_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006299 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "3_static_loop_subscript_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006300 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "3_static_loop_subscript_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006301 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3"
        "_static_loop_subscript_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006302 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_"
        "static_loop_subscript_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006303 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_s"
        "tatic_loop_subscript_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006304 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_"
        "static_loop_subscript_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006305 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_s"
        "tatic_loop_subscript_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006306 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec3_dynamic_loop_subscript_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006307 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec3_dynamic_loop_subscript_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006308 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec3_dynamic_loop_subscript_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006309 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec3_dynamic_loop_subscript_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006310 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "3_dynamic_loop_subscript_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006311 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3"
        "_dynamic_loop_subscript_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006312 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "3_dynamic_loop_subscript_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006313 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3"
        "_dynamic_loop_subscript_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006314 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_"
        "dynamic_loop_subscript_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006315 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_d"
        "ynamic_loop_subscript_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006316 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_d"
        "ynamic_loop_subscript_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006317 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec3_dy"
        "namic_loop_subscript_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006318 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_"
        "subscript.vec4_direct_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006319 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_s"
        "ubscript.vec4_direct_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006320 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_s"
        "ubscript.vec4_direct_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006321 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_su"
        "bscript.vec4_direct_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006322 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
        "ript.vec4_direct_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006323 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec4_direct_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006324 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
        "ript.vec4_direct_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006325 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec4_direct_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006326 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec4_direct_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006327 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec4_direct_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006328 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec4_direct_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006329 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec4_direct_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006330 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_s"
        "ubscript.vec4_component_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006331 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_su"
        "bscript.vec4_component_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006332 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_sub"
        "script.vec4_component_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006333 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subs"
        "cript.vec4_component_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006334 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec4_component_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006335 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec4_component_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006336 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec4_component_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006337 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec4_component_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006338 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec4_component_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006339 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec4_component_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006340 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec4_component_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006341 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec4_component_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006342 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
        "ript.vec4_static_subscript_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006343 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec4_static_subscript_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006344 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec4_static_subscript_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006345 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec4_static_subscript_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006346 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec4_static_subscript_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006347 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
        "ec4_static_subscript_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006348 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec4_static_subscript_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006349 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
        "ec4_static_subscript_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006350 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
        "c4_static_subscript_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006351 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "4_static_subscript_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006352 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "4_static_subscript_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006353 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4"
        "_static_subscript_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006354 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subsc"
        "ript.vec4_dynamic_subscript_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006355 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscr"
        "ipt.vec4_dynamic_subscript_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006356 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec4_dynamic_subscript_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006357 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec4_dynamic_subscript_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006358 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec4_dynamic_subscript_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006359 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
        "ec4_dynamic_subscript_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006360 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.v"
        "ec4_dynamic_subscript_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006361 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
        "c4_dynamic_subscript_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006362 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "4_dynamic_subscript_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006363 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4"
        "_dynamic_subscript_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006364 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "4_dynamic_subscript_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006365 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4"
        "_dynamic_subscript_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006366 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscri"
        "pt.vec4_static_loop_subscript_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006367 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec4_static_loop_subscript_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006368 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec4_static_loop_subscript_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006369 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec4_static_loop_subscript_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006370 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.ve"
        "c4_static_loop_subscript_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006371 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "4_static_loop_subscript_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006372 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "4_static_loop_subscript_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006373 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4"
        "_static_loop_subscript_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006374 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_"
        "static_loop_subscript_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006375 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_s"
        "tatic_loop_subscript_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006376 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_"
        "static_loop_subscript_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006377 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_s"
        "tatic_loop_subscript_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006378 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscrip"
        "t.vec4_dynamic_loop_subscript_write_direct_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006379 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec4_dynamic_loop_subscript_write_direct_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006380 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript"
        ".vec4_dynamic_loop_subscript_write_component_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006381 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript."
        "vec4_dynamic_loop_subscript_write_component_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006382 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "4_dynamic_loop_subscript_write_static_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006383 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4"
        "_dynamic_loop_subscript_write_static_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006384 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec"
        "4_dynamic_loop_subscript_write_dynamic_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006385 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4"
        "_dynamic_loop_subscript_write_dynamic_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006386 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_"
        "dynamic_loop_subscript_write_static_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006387 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_d"
        "ynamic_loop_subscript_write_static_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006388 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_d"
        "ynamic_loop_subscript_write_dynamic_loop_subscript_read_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006389 end";
}

static HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.indexing.vector_subscript.vec4_dy"
        "namic_loop_subscript_write_dynamic_loop_subscript_read_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30007TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30007TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30007TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30007TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30007TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006390 end";
}
