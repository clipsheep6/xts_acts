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
#include "../ActsDeqpgles30038TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30038TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_037240_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037240_2 "itial.render.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037240, VkglTestCase_037240_1, VkglTestCase_037240_2);

#define VkglTestCase_037241_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037241_2 "tial.render.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037241, VkglTestCase_037241_1, VkglTestCase_037241_2);

#define VkglTestCase_037242_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037242_2 "nitial.render.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037242, VkglTestCase_037242_1, VkglTestCase_037242_2);

#define VkglTestCase_037243_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037243_2 "itial.render.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037243, VkglTestCase_037243_1, VkglTestCase_037243_2);

#define VkglTestCase_037244_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037244_2 "tial.render.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037244, VkglTestCase_037244_1, VkglTestCase_037244_2);

#define VkglTestCase_037245_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037245_2 "nitial.render.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037245, VkglTestCase_037245_1, VkglTestCase_037245_2);

#define VkglTestCase_037246_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037246_2 "itial.render.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037246, VkglTestCase_037246_1, VkglTestCase_037246_2);

#define VkglTestCase_037247_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037247_2 "tial.render.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037247, VkglTestCase_037247_1, VkglTestCase_037247_2);

#define VkglTestCase_037248_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037248_2 "nitial.render.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037248, VkglTestCase_037248_1, VkglTestCase_037248_2);

#define VkglTestCase_037249_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037249_2 "itial.render.basic_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037249, VkglTestCase_037249_1, VkglTestCase_037249_2);

#define VkglTestCase_037250_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037250_2 "tial.render.basic_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037250, VkglTestCase_037250_1, VkglTestCase_037250_2);

#define VkglTestCase_037251_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037251_2 "nitial.render.basic_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037251, VkglTestCase_037251_1, VkglTestCase_037251_2);

#define VkglTestCase_037252_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037252_2 "itial.render.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037252, VkglTestCase_037252_1, VkglTestCase_037252_2);

#define VkglTestCase_037253_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037253_2 "tial.render.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037253, VkglTestCase_037253_1, VkglTestCase_037253_2);

#define VkglTestCase_037254_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037254_2 "nitial.render.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037254, VkglTestCase_037254_1, VkglTestCase_037254_2);

#define VkglTestCase_037753_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037753_2 ".by_pointer.render.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037753, VkglTestCase_037753_1, VkglTestCase_037753_2);

#define VkglTestCase_037754_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037754_2 "by_pointer.render.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037754, VkglTestCase_037754_1, VkglTestCase_037754_2);

#define VkglTestCase_037755_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037755_2 "d.by_pointer.render.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037755, VkglTestCase_037755_1, VkglTestCase_037755_2);

#define VkglTestCase_037756_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037756_2 ".by_pointer.render.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037756, VkglTestCase_037756_1, VkglTestCase_037756_2);

#define VkglTestCase_037757_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037757_2 "by_pointer.render.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037757, VkglTestCase_037757_1, VkglTestCase_037757_2);

#define VkglTestCase_037758_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037758_2 "d.by_pointer.render.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037758, VkglTestCase_037758_1, VkglTestCase_037758_2);

#define VkglTestCase_037759_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037759_2 ".by_pointer.render.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037759, VkglTestCase_037759_1, VkglTestCase_037759_2);

#define VkglTestCase_037760_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037760_2 "by_pointer.render.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037760, VkglTestCase_037760_1, VkglTestCase_037760_2);

#define VkglTestCase_037761_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037761_2 "d.by_pointer.render.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037761, VkglTestCase_037761_1, VkglTestCase_037761_2);

#define VkglTestCase_037762_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037762_2 ".by_pointer.render.basic_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037762, VkglTestCase_037762_1, VkglTestCase_037762_2);

#define VkglTestCase_037763_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037763_2 "by_pointer.render.basic_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037763, VkglTestCase_037763_1, VkglTestCase_037763_2);

#define VkglTestCase_037764_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037764_2 "d.by_pointer.render.basic_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037764, VkglTestCase_037764_1, VkglTestCase_037764_2);

#define VkglTestCase_037765_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037765_2 ".by_pointer.render.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037765, VkglTestCase_037765_1, VkglTestCase_037765_2);

#define VkglTestCase_037766_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037766_2 "by_pointer.render.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037766, VkglTestCase_037766_1, VkglTestCase_037766_2);

#define VkglTestCase_037767_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037767_2 "d.by_pointer.render.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037767, VkglTestCase_037767_1, VkglTestCase_037767_2);

#define VkglTestCase_037768_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_037768_2 "inter.render.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037768, VkglTestCase_037768_1, VkglTestCase_037768_2);

#define VkglTestCase_037769_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_037769_2 "nter.render.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037769, VkglTestCase_037769_1, VkglTestCase_037769_2);

#define VkglTestCase_037770_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037770_2 "ointer.render.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037770, VkglTestCase_037770_1, VkglTestCase_037770_2);

#define VkglTestCase_038137_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038137_2 "d.by_value.render.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038137, VkglTestCase_038137_1, VkglTestCase_038137_2);

#define VkglTestCase_038138_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038138_2 ".by_value.render.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038138, VkglTestCase_038138_1, VkglTestCase_038138_2);

#define VkglTestCase_038139_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_038139_2 "ed.by_value.render.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038139, VkglTestCase_038139_1, VkglTestCase_038139_2);

#define VkglTestCase_038140_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038140_2 "d.by_value.render.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038140, VkglTestCase_038140_1, VkglTestCase_038140_2);

#define VkglTestCase_038141_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038141_2 ".by_value.render.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038141, VkglTestCase_038141_1, VkglTestCase_038141_2);

#define VkglTestCase_038142_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_038142_2 "ed.by_value.render.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038142, VkglTestCase_038142_1, VkglTestCase_038142_2);

#define VkglTestCase_038143_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038143_2 "d.by_value.render.basic_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038143, VkglTestCase_038143_1, VkglTestCase_038143_2);

#define VkglTestCase_038144_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038144_2 ".by_value.render.basic_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038144, VkglTestCase_038144_1, VkglTestCase_038144_2);

#define VkglTestCase_038145_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_038145_2 "ed.by_value.render.basic_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038145, VkglTestCase_038145_1, VkglTestCase_038145_2);

#define VkglTestCase_038146_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038146_2 "d.by_value.render.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038146, VkglTestCase_038146_1, VkglTestCase_038146_2);

#define VkglTestCase_038147_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038147_2 ".by_value.render.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038147, VkglTestCase_038147_1, VkglTestCase_038147_2);

#define VkglTestCase_038148_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_038148_2 "ed.by_value.render.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038148, VkglTestCase_038148_1, VkglTestCase_038148_2);

#define VkglTestCase_038149_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_038149_2 "alue.render.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038149, VkglTestCase_038149_1, VkglTestCase_038149_2);

#define VkglTestCase_038150_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_038150_2 "lue.render.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038150, VkglTestCase_038150_1, VkglTestCase_038150_2);

#define VkglTestCase_038151_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038151_2 "value.render.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038151, VkglTestCase_038151_1, VkglTestCase_038151_2);
=======
static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.render.basic_struct.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037240 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.render.basic_struct.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037241 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.render.basic_struct.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037242 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.render.basic_struct.mat4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037243 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.render.basic_struct.mat4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037244 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.render.basic_struct.mat4_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037245 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.render.basic_struct.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037246 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.render.basic_struct.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037247 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.render.basic_struct.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037248 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.render.basic_struct.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037249 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.render.basic_struct.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037250 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.render.basic_struct.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037251 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.in"
        "itial.render.basic_struct.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037252 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.ini"
        "tial.render.basic_struct.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037253 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.i"
        "nitial.render.basic_struct.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037254 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.render.basic_struct.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037753 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.render.basic_struct.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037754 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.render.basic_struct.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037755 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.render.basic_struct.mat4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037756 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.render.basic_struct.mat4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037757 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.render.basic_struct.mat4_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037758 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.render.basic_struct.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037759 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.render.basic_struct.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037760 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.render.basic_struct.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037761 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.render.basic_struct.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037762 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.render.basic_struct.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037763 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.render.basic_struct.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037764 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_pointer.render.basic_struct.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037765 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned."
        "by_pointer.render.basic_struct.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037766 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_pointer.render.basic_struct.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037767 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
        "inter.render.basic_struct.sampler2D_samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037768 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_poi"
        "nter.render.basic_struct.sampler2D_samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037769 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_037770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
        "ointer.render.basic_struct.sampler2D_samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_037770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_037770 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.render.basic_struct.float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038137 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.render.basic_struct.float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038138 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_value.render.basic_struct.float_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038139 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.render.basic_struct.int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038140 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.render.basic_struct.int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038141 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_value.render.basic_struct.int_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038142 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.render.basic_struct.uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038143 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.render.basic_struct.uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038144 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_value.render.basic_struct.uint_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038145 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigne"
        "d.by_value.render.basic_struct.bool_bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038146 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned"
        ".by_value.render.basic_struct.bool_bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038147 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assign"
        "ed.by_value.render.basic_struct.bool_bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038148 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
        "alue.render.basic_struct.sampler2D_samplerCube_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038149 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_va"
        "lue.render.basic_struct.sampler2D_samplerCube_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038150 end";
}

static HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_038151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
        "value.render.basic_struct.sampler2D_samplerCube_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30038TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30038TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30038TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30038TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30038TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_038151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_038151 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
