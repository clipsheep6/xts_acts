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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016819_1 "dEQP-GLES31.functional.program_uniform.by_pointer."
#define VkglTestCase_016819_2 "get_uniform.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016819, VkglTestCase_016819_1, VkglTestCase_016819_2);

#define VkglTestCase_016820_1 "dEQP-GLES31.functional.program_uniform.by_pointer.g"
#define VkglTestCase_016820_2 "et_uniform.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016820, VkglTestCase_016820_1, VkglTestCase_016820_2);

#define VkglTestCase_016821_1 "dEQP-GLES31.functional.program_uniform.by_pointer"
#define VkglTestCase_016821_2 ".get_uniform.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016821, VkglTestCase_016821_1, VkglTestCase_016821_2);

#define VkglTestCase_016822_1 "dEQP-GLES31.functional.program_uniform.by_pointer."
#define VkglTestCase_016822_2 "get_uniform.nested_structs_arrays.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016822, VkglTestCase_016822_1, VkglTestCase_016822_2);

#define VkglTestCase_016823_1 "dEQP-GLES31.functional.program_uniform.by_pointer.g"
#define VkglTestCase_016823_2 "et_uniform.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016823, VkglTestCase_016823_1, VkglTestCase_016823_2);

#define VkglTestCase_016824_1 "dEQP-GLES31.functional.program_uniform.by_pointer"
#define VkglTestCase_016824_2 ".get_uniform.nested_structs_arrays.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016824, VkglTestCase_016824_1, VkglTestCase_016824_2);

#define VkglTestCase_016825_1 "dEQP-GLES31.functional.program_uniform.by_pointer."
#define VkglTestCase_016825_2 "get_uniform.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016825, VkglTestCase_016825_1, VkglTestCase_016825_2);

#define VkglTestCase_016826_1 "dEQP-GLES31.functional.program_uniform.by_pointer.g"
#define VkglTestCase_016826_2 "et_uniform.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016826, VkglTestCase_016826_1, VkglTestCase_016826_2);

#define VkglTestCase_016827_1 "dEQP-GLES31.functional.program_uniform.by_pointer"
#define VkglTestCase_016827_2 ".get_uniform.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016827, VkglTestCase_016827_1, VkglTestCase_016827_2);

#define VkglTestCase_016828_1 "dEQP-GLES31.functional.program_uniform.by_pointer."
#define VkglTestCase_016828_2 "get_uniform.nested_structs_arrays.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016828, VkglTestCase_016828_1, VkglTestCase_016828_2);

#define VkglTestCase_016829_1 "dEQP-GLES31.functional.program_uniform.by_pointer.g"
#define VkglTestCase_016829_2 "et_uniform.nested_structs_arrays.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016829, VkglTestCase_016829_1, VkglTestCase_016829_2);

#define VkglTestCase_016830_1 "dEQP-GLES31.functional.program_uniform.by_pointer"
#define VkglTestCase_016830_2 ".get_uniform.nested_structs_arrays.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016830, VkglTestCase_016830_1, VkglTestCase_016830_2);

#define VkglTestCase_016831_1 "dEQP-GLES31.functional.program_uniform.by_pointer."
#define VkglTestCase_016831_2 "get_uniform.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016831, VkglTestCase_016831_1, VkglTestCase_016831_2);

#define VkglTestCase_016832_1 "dEQP-GLES31.functional.program_uniform.by_pointer.g"
#define VkglTestCase_016832_2 "et_uniform.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016832, VkglTestCase_016832_1, VkglTestCase_016832_2);

#define VkglTestCase_016833_1 "dEQP-GLES31.functional.program_uniform.by_pointer"
#define VkglTestCase_016833_2 ".get_uniform.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016833, VkglTestCase_016833_1, VkglTestCase_016833_2);

#define VkglTestCase_016834_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
#define VkglTestCase_016834_2 "iform.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016834, VkglTestCase_016834_1, VkglTestCase_016834_2);

#define VkglTestCase_016835_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
#define VkglTestCase_016835_2 "form.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016835, VkglTestCase_016835_1, VkglTestCase_016835_2);

#define VkglTestCase_016836_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_u"
#define VkglTestCase_016836_2 "niform.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016836, VkglTestCase_016836_1, VkglTestCase_016836_2);

#define VkglTestCase_017269_1 "dEQP-GLES31.functional.program_uniform.by_value.g"
#define VkglTestCase_017269_2 "et_uniform.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017269, VkglTestCase_017269_1, VkglTestCase_017269_2);

#define VkglTestCase_017270_1 "dEQP-GLES31.functional.program_uniform.by_value.ge"
#define VkglTestCase_017270_2 "t_uniform.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017270, VkglTestCase_017270_1, VkglTestCase_017270_2);

#define VkglTestCase_017271_1 "dEQP-GLES31.functional.program_uniform.by_value."
#define VkglTestCase_017271_2 "get_uniform.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017271, VkglTestCase_017271_1, VkglTestCase_017271_2);

#define VkglTestCase_017272_1 "dEQP-GLES31.functional.program_uniform.by_value.g"
#define VkglTestCase_017272_2 "et_uniform.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017272, VkglTestCase_017272_1, VkglTestCase_017272_2);

#define VkglTestCase_017273_1 "dEQP-GLES31.functional.program_uniform.by_value.ge"
#define VkglTestCase_017273_2 "t_uniform.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017273, VkglTestCase_017273_1, VkglTestCase_017273_2);

#define VkglTestCase_017274_1 "dEQP-GLES31.functional.program_uniform.by_value."
#define VkglTestCase_017274_2 "get_uniform.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017274, VkglTestCase_017274_1, VkglTestCase_017274_2);

#define VkglTestCase_017275_1 "dEQP-GLES31.functional.program_uniform.by_value.g"
#define VkglTestCase_017275_2 "et_uniform.nested_structs_arrays.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017275, VkglTestCase_017275_1, VkglTestCase_017275_2);

#define VkglTestCase_017276_1 "dEQP-GLES31.functional.program_uniform.by_value.ge"
#define VkglTestCase_017276_2 "t_uniform.nested_structs_arrays.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017276, VkglTestCase_017276_1, VkglTestCase_017276_2);

#define VkglTestCase_017277_1 "dEQP-GLES31.functional.program_uniform.by_value."
#define VkglTestCase_017277_2 "get_uniform.nested_structs_arrays.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017277, VkglTestCase_017277_1, VkglTestCase_017277_2);

#define VkglTestCase_017278_1 "dEQP-GLES31.functional.program_uniform.by_value.g"
#define VkglTestCase_017278_2 "et_uniform.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017278, VkglTestCase_017278_1, VkglTestCase_017278_2);

#define VkglTestCase_017279_1 "dEQP-GLES31.functional.program_uniform.by_value.ge"
#define VkglTestCase_017279_2 "t_uniform.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017279, VkglTestCase_017279_1, VkglTestCase_017279_2);

#define VkglTestCase_017280_1 "dEQP-GLES31.functional.program_uniform.by_value."
#define VkglTestCase_017280_2 "get_uniform.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017280, VkglTestCase_017280_1, VkglTestCase_017280_2);

#define VkglTestCase_017281_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
#define VkglTestCase_017281_2 "form.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017281, VkglTestCase_017281_1, VkglTestCase_017281_2);

#define VkglTestCase_017282_1 "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
#define VkglTestCase_017282_2 "orm.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017282, VkglTestCase_017282_1, VkglTestCase_017282_2);

#define VkglTestCase_017283_1 "dEQP-GLES31.functional.program_uniform.by_value.get_un"
#define VkglTestCase_017283_2 "iform.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017283, VkglTestCase_017283_1, VkglTestCase_017283_2);
