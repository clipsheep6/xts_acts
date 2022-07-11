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

<<<<<<< HEAD
#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30044TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_043218_1 "dEQP-GLES3.functional.stat"
#define VkglTestCase_043218_2 "e_query.shader.shader_type"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043218, VkglTestCase_043218_1, VkglTestCase_043218_2);

#define VkglTestCase_043219_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043219_2 "ry.shader.shader_compile_status"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043219, VkglTestCase_043219_1, VkglTestCase_043219_2);

#define VkglTestCase_043220_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043220_2 "ry.shader.shader_info_log_length"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043220, VkglTestCase_043220_1, VkglTestCase_043220_2);

#define VkglTestCase_043221_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_043221_2 "ery.shader.shader_source_length"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043221, VkglTestCase_043221_1, VkglTestCase_043221_2);

#define VkglTestCase_043222_1 "dEQP-GLES3.functional.state"
#define VkglTestCase_043222_2 "_query.shader.delete_status"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043222, VkglTestCase_043222_1, VkglTestCase_043222_2);

#define VkglTestCase_043223_1 "dEQP-GLES3.functional.state_query.s"
#define VkglTestCase_043223_2 "hader.current_vertex_attrib_initial"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043223, VkglTestCase_043223_1, VkglTestCase_043223_2);

#define VkglTestCase_043224_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043224_2 "shader.current_vertex_attrib_float"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043224, VkglTestCase_043224_1, VkglTestCase_043224_2);

#define VkglTestCase_043225_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_043225_2 ".shader.current_vertex_attrib_int"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043225, VkglTestCase_043225_1, VkglTestCase_043225_2);

#define VkglTestCase_043226_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_043226_2 ".shader.current_vertex_attrib_uint"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043226, VkglTestCase_043226_1, VkglTestCase_043226_2);

#define VkglTestCase_043227_1 "dEQP-GLES3.functional.state_query.sha"
#define VkglTestCase_043227_2 "der.current_vertex_attrib_float_to_int"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043227, VkglTestCase_043227_1, VkglTestCase_043227_2);

#define VkglTestCase_043228_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043228_2 "y.shader.program_info_log_length"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043228, VkglTestCase_043228_1, VkglTestCase_043228_2);

#define VkglTestCase_043229_1 "dEQP-GLES3.functional.state_query.sha"
#define VkglTestCase_043229_2 "der.program_info_log_length_link_error"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043229, VkglTestCase_043229_1, VkglTestCase_043229_2);

#define VkglTestCase_043230_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043230_2 "y.shader.program_validate_status"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043230, VkglTestCase_043230_1, VkglTestCase_043230_2);

#define VkglTestCase_043231_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043231_2 "y.shader.program_attached_shaders"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043231, VkglTestCase_043231_1, VkglTestCase_043231_2);

#define VkglTestCase_043232_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043232_2 "shader.program_active_uniform_name"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043232, VkglTestCase_043232_1, VkglTestCase_043232_2);

#define VkglTestCase_043233_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043233_2 "shader.program_active_uniform_types"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043233, VkglTestCase_043233_1, VkglTestCase_043233_2);

#define VkglTestCase_043234_1 "dEQP-GLES3.functional.state_query.s"
#define VkglTestCase_043234_2 "hader.program_active_uniform_blocks"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043234, VkglTestCase_043234_1, VkglTestCase_043234_2);

#define VkglTestCase_043235_1 "dEQP-GLES3.functional.state"
#define VkglTestCase_043235_2 "_query.shader.program_binary"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043235, VkglTestCase_043235_1, VkglTestCase_043235_2);

#define VkglTestCase_043236_1 "dEQP-GLES3.functional.state_q"
#define VkglTestCase_043236_2 "uery.shader.transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043236, VkglTestCase_043236_1, VkglTestCase_043236_2);

#define VkglTestCase_043237_1 "dEQP-GLES3.functional.state_q"
#define VkglTestCase_043237_2 "uery.shader.active_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043237, VkglTestCase_043237_1, VkglTestCase_043237_2);

#define VkglTestCase_043238_1 "dEQP-GLES3.functional.state_q"
#define VkglTestCase_043238_2 "uery.shader.vertex_attrib_size"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043238, VkglTestCase_043238_1, VkglTestCase_043238_2);

#define VkglTestCase_043239_1 "dEQP-GLES3.functional.state_q"
#define VkglTestCase_043239_2 "uery.shader.vertex_attrib_type"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043239, VkglTestCase_043239_1, VkglTestCase_043239_2);

#define VkglTestCase_043240_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_043240_2 "ery.shader.vertex_attrib_stride"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043240, VkglTestCase_043240_1, VkglTestCase_043240_2);

#define VkglTestCase_043241_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043241_2 "y.shader.vertex_attrib_normalized"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043241, VkglTestCase_043241_1, VkglTestCase_043241_2);

#define VkglTestCase_043242_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043242_2 "ry.shader.vertex_attrib_integer"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043242, VkglTestCase_043242_1, VkglTestCase_043242_2);

#define VkglTestCase_043243_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043243_2 "shader.vertex_attrib_array_enabled"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043243, VkglTestCase_043243_1, VkglTestCase_043243_2);

#define VkglTestCase_043244_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043244_2 "shader.vertex_attrib_array_divisor"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043244, VkglTestCase_043244_1, VkglTestCase_043244_2);

#define VkglTestCase_043245_1 "dEQP-GLES3.functional.state_query.sha"
#define VkglTestCase_043245_2 "der.vertex_attrib_array_buffer_binding"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043245, VkglTestCase_043245_1, VkglTestCase_043245_2);

#define VkglTestCase_043246_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043246_2 "ry.shader.vertex_attrib_pointerv"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043246, VkglTestCase_043246_1, VkglTestCase_043246_2);

#define VkglTestCase_043247_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_043247_2 "ery.shader.uniform_value_float"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043247, VkglTestCase_043247_1, VkglTestCase_043247_2);

#define VkglTestCase_043248_1 "dEQP-GLES3.functional.state_q"
#define VkglTestCase_043248_2 "uery.shader.uniform_value_int"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043248, VkglTestCase_043248_1, VkglTestCase_043248_2);

#define VkglTestCase_043249_1 "dEQP-GLES3.functional.state_q"
#define VkglTestCase_043249_2 "uery.shader.uniform_value_uint"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043249, VkglTestCase_043249_1, VkglTestCase_043249_2);

#define VkglTestCase_043250_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043250_2 "ry.shader.uniform_value_boolean"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043250, VkglTestCase_043250_1, VkglTestCase_043250_2);

#define VkglTestCase_043251_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043251_2 "ry.shader.uniform_value_sampler"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043251, VkglTestCase_043251_1, VkglTestCase_043251_2);

#define VkglTestCase_043252_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_043252_2 "ery.shader.uniform_value_array"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043252, VkglTestCase_043252_1, VkglTestCase_043252_2);

#define VkglTestCase_043253_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_043253_2 "ery.shader.uniform_value_matrix"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043253, VkglTestCase_043253_1, VkglTestCase_043253_2);

#define VkglTestCase_043254_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043254_2 "shader.precision_vertex_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043254, VkglTestCase_043254_1, VkglTestCase_043254_2);

#define VkglTestCase_043255_1 "dEQP-GLES3.functional.state_query.s"
#define VkglTestCase_043255_2 "hader.precision_vertex_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043255, VkglTestCase_043255_1, VkglTestCase_043255_2);

#define VkglTestCase_043256_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043256_2 "shader.precision_vertex_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043256, VkglTestCase_043256_1, VkglTestCase_043256_2);

#define VkglTestCase_043257_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_043257_2 ".shader.precision_vertex_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043257, VkglTestCase_043257_1, VkglTestCase_043257_2);

#define VkglTestCase_043258_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043258_2 "shader.precision_vertex_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043258, VkglTestCase_043258_1, VkglTestCase_043258_2);

#define VkglTestCase_043259_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_043259_2 ".shader.precision_vertex_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043259, VkglTestCase_043259_1, VkglTestCase_043259_2);

#define VkglTestCase_043260_1 "dEQP-GLES3.functional.state_query.s"
#define VkglTestCase_043260_2 "hader.precision_fragment_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043260, VkglTestCase_043260_1, VkglTestCase_043260_2);

#define VkglTestCase_043261_1 "dEQP-GLES3.functional.state_query.sh"
#define VkglTestCase_043261_2 "ader.precision_fragment_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043261, VkglTestCase_043261_1, VkglTestCase_043261_2);

#define VkglTestCase_043262_1 "dEQP-GLES3.functional.state_query.s"
#define VkglTestCase_043262_2 "hader.precision_fragment_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043262, VkglTestCase_043262_1, VkglTestCase_043262_2);

#define VkglTestCase_043263_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043263_2 "shader.precision_fragment_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043263, VkglTestCase_043263_1, VkglTestCase_043263_2);

#define VkglTestCase_043264_1 "dEQP-GLES3.functional.state_query.s"
#define VkglTestCase_043264_2 "hader.precision_fragment_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043264, VkglTestCase_043264_1, VkglTestCase_043264_2);

#define VkglTestCase_043265_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043265_2 "shader.precision_fragment_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043265, VkglTestCase_043265_1, VkglTestCase_043265_2);
=======
static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.stat"
        "e_query.shader.shader_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043218 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.shader.shader_compile_status",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043219 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.shader.shader_info_log_length",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043220 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_qu"
        "ery.shader.shader_source_length",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043221 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state"
        "_query.shader.delete_status",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043222 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.s"
        "hader.current_vertex_attrib_initial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043223 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "shader.current_vertex_attrib_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043224 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query"
        ".shader.current_vertex_attrib_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043225 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query"
        ".shader.current_vertex_attrib_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043226 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.sha"
        "der.current_vertex_attrib_float_to_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043227 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_quer"
        "y.shader.program_info_log_length",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043228 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.sha"
        "der.program_info_log_length_link_error",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043229 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_quer"
        "y.shader.program_validate_status",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043230 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_quer"
        "y.shader.program_attached_shaders",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043231 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "shader.program_active_uniform_name",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043232 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "shader.program_active_uniform_types",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043233 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.s"
        "hader.program_active_uniform_blocks",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043234 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state"
        "_query.shader.program_binary",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043235 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_q"
        "uery.shader.transform_feedback",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043236 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_q"
        "uery.shader.active_attributes",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043237 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_q"
        "uery.shader.vertex_attrib_size",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043238 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_q"
        "uery.shader.vertex_attrib_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043239 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_qu"
        "ery.shader.vertex_attrib_stride",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043240 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_quer"
        "y.shader.vertex_attrib_normalized",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043241 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.shader.vertex_attrib_integer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043242 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "shader.vertex_attrib_array_enabled",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043243 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "shader.vertex_attrib_array_divisor",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043244 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.sha"
        "der.vertex_attrib_array_buffer_binding",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043245 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.shader.vertex_attrib_pointerv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043246 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_qu"
        "ery.shader.uniform_value_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043247 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_q"
        "uery.shader.uniform_value_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043248 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_q"
        "uery.shader.uniform_value_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043249 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.shader.uniform_value_boolean",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043250 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.shader.uniform_value_sampler",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043251 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_qu"
        "ery.shader.uniform_value_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043252 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_qu"
        "ery.shader.uniform_value_matrix",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043253 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "shader.precision_vertex_lowp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043254 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.s"
        "hader.precision_vertex_mediump_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043255 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "shader.precision_vertex_highp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043256 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query"
        ".shader.precision_vertex_lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043257 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "shader.precision_vertex_mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043258 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query"
        ".shader.precision_vertex_highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043259 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.s"
        "hader.precision_fragment_lowp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043260 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.sh"
        "ader.precision_fragment_mediump_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043261 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.s"
        "hader.precision_fragment_highp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043262 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "shader.precision_fragment_lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043263 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.s"
        "hader.precision_fragment_mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043264 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "shader.precision_fragment_highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043265 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
