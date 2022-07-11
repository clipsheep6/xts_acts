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
#include "../ActsDeqpgles30038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037048_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037048_2 "al.get_uniform.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037048, VkglTestCase_037048_1, VkglTestCase_037048_2);

#define VkglTestCase_037049_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037049_2 "l.get_uniform.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037049, VkglTestCase_037049_1, VkglTestCase_037049_2);

#define VkglTestCase_037050_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037050_2 "ial.get_uniform.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037050, VkglTestCase_037050_1, VkglTestCase_037050_2);

#define VkglTestCase_037051_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037051_2 "ial.get_uniform.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037051, VkglTestCase_037051_1, VkglTestCase_037051_2);

#define VkglTestCase_037052_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037052_2 "al.get_uniform.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037052, VkglTestCase_037052_1, VkglTestCase_037052_2);

#define VkglTestCase_037053_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037053_2 "tial.get_uniform.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037053, VkglTestCase_037053_1, VkglTestCase_037053_2);

#define VkglTestCase_037054_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037054_2 "ial.get_uniform.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037054, VkglTestCase_037054_1, VkglTestCase_037054_2);

#define VkglTestCase_037055_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037055_2 "al.get_uniform.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037055, VkglTestCase_037055_1, VkglTestCase_037055_2);

#define VkglTestCase_037056_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037056_2 "tial.get_uniform.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037056, VkglTestCase_037056_1, VkglTestCase_037056_2);

#define VkglTestCase_037057_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037057_2 "al.get_uniform.basic_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037057, VkglTestCase_037057_1, VkglTestCase_037057_2);

#define VkglTestCase_037058_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037058_2 "l.get_uniform.basic_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037058, VkglTestCase_037058_1, VkglTestCase_037058_2);

#define VkglTestCase_037059_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037059_2 "ial.get_uniform.basic_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037059, VkglTestCase_037059_1, VkglTestCase_037059_2);

#define VkglTestCase_037060_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037060_2 "al.get_uniform.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037060, VkglTestCase_037060_1, VkglTestCase_037060_2);

#define VkglTestCase_037061_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037061_2 "l.get_uniform.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037061, VkglTestCase_037061_1, VkglTestCase_037061_2);

#define VkglTestCase_037062_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037062_2 "ial.get_uniform.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037062, VkglTestCase_037062_1, VkglTestCase_037062_2);

#define VkglTestCase_037063_1 "dEQP-GLES3.functional.uniform_api.value.initial.ge"
#define VkglTestCase_037063_2 "t_uniform.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037063, VkglTestCase_037063_1, VkglTestCase_037063_2);

#define VkglTestCase_037064_1 "dEQP-GLES3.functional.uniform_api.value.initial.get"
#define VkglTestCase_037064_2 "_uniform.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037064, VkglTestCase_037064_1, VkglTestCase_037064_2);

#define VkglTestCase_037065_1 "dEQP-GLES3.functional.uniform_api.value.initial.g"
#define VkglTestCase_037065_2 "et_uniform.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037065, VkglTestCase_037065_1, VkglTestCase_037065_2);

#define VkglTestCase_037531_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037531_2 "_pointer.get_uniform.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037531, VkglTestCase_037531_1, VkglTestCase_037531_2);

#define VkglTestCase_037532_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037532_2 "pointer.get_uniform.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037532, VkglTestCase_037532_1, VkglTestCase_037532_2);

#define VkglTestCase_037533_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037533_2 "y_pointer.get_uniform.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037533, VkglTestCase_037533_1, VkglTestCase_037533_2);

#define VkglTestCase_037534_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037534_2 "y_pointer.get_uniform.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037534, VkglTestCase_037534_1, VkglTestCase_037534_2);

#define VkglTestCase_037535_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037535_2 "_pointer.get_uniform.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037535, VkglTestCase_037535_1, VkglTestCase_037535_2);

#define VkglTestCase_037536_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037536_2 "by_pointer.get_uniform.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037536, VkglTestCase_037536_1, VkglTestCase_037536_2);

#define VkglTestCase_037537_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037537_2 "y_pointer.get_uniform.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037537, VkglTestCase_037537_1, VkglTestCase_037537_2);

#define VkglTestCase_037538_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037538_2 "_pointer.get_uniform.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037538, VkglTestCase_037538_1, VkglTestCase_037538_2);

#define VkglTestCase_037539_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037539_2 "by_pointer.get_uniform.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037539, VkglTestCase_037539_1, VkglTestCase_037539_2);

#define VkglTestCase_037540_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037540_2 "_pointer.get_uniform.basic_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037540, VkglTestCase_037540_1, VkglTestCase_037540_2);

#define VkglTestCase_037541_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037541_2 "pointer.get_uniform.basic_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037541, VkglTestCase_037541_1, VkglTestCase_037541_2);

#define VkglTestCase_037542_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037542_2 "y_pointer.get_uniform.basic_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037542, VkglTestCase_037542_1, VkglTestCase_037542_2);

#define VkglTestCase_037543_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037543_2 "_pointer.get_uniform.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037543, VkglTestCase_037543_1, VkglTestCase_037543_2);

#define VkglTestCase_037544_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037544_2 "pointer.get_uniform.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037544, VkglTestCase_037544_1, VkglTestCase_037544_2);

#define VkglTestCase_037545_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037545_2 "y_pointer.get_uniform.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037545, VkglTestCase_037545_1, VkglTestCase_037545_2);

#define VkglTestCase_037546_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_037546_2 "ter.get_uniform.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037546, VkglTestCase_037546_1, VkglTestCase_037546_2);

#define VkglTestCase_037547_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_point"
#define VkglTestCase_037547_2 "er.get_uniform.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037547, VkglTestCase_037547_1, VkglTestCase_037547_2);

#define VkglTestCase_037548_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_037548_2 "nter.get_uniform.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037548, VkglTestCase_037548_1, VkglTestCase_037548_2);

#define VkglTestCase_037990_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037990_2 "y_value.get_uniform.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037990, VkglTestCase_037990_1, VkglTestCase_037990_2);

#define VkglTestCase_037991_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037991_2 "_value.get_uniform.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037991, VkglTestCase_037991_1, VkglTestCase_037991_2);

#define VkglTestCase_037992_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037992_2 "by_value.get_uniform.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037992, VkglTestCase_037992_1, VkglTestCase_037992_2);

#define VkglTestCase_037993_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037993_2 "by_value.get_uniform.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037993, VkglTestCase_037993_1, VkglTestCase_037993_2);

#define VkglTestCase_037994_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037994_2 "y_value.get_uniform.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037994, VkglTestCase_037994_1, VkglTestCase_037994_2);

#define VkglTestCase_037995_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037995_2 ".by_value.get_uniform.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037995, VkglTestCase_037995_1, VkglTestCase_037995_2);

#define VkglTestCase_037996_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037996_2 "y_value.get_uniform.basic_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037996, VkglTestCase_037996_1, VkglTestCase_037996_2);

#define VkglTestCase_037997_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037997_2 "_value.get_uniform.basic_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037997, VkglTestCase_037997_1, VkglTestCase_037997_2);

#define VkglTestCase_037998_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037998_2 "by_value.get_uniform.basic_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037998, VkglTestCase_037998_1, VkglTestCase_037998_2);

#define VkglTestCase_037999_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037999_2 "y_value.get_uniform.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037999, VkglTestCase_037999_1, VkglTestCase_037999_2);

#define VkglTestCase_038000_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038000_2 "_value.get_uniform.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038000, VkglTestCase_038000_1, VkglTestCase_038000_2);

#define VkglTestCase_038001_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038001_2 "by_value.get_uniform.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038001, VkglTestCase_038001_1, VkglTestCase_038001_2);

#define VkglTestCase_038002_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_val"
#define VkglTestCase_038002_2 "ue.get_uniform.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038002, VkglTestCase_038002_1, VkglTestCase_038002_2);

#define VkglTestCase_038003_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_valu"
#define VkglTestCase_038003_2 "e.get_uniform.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038003, VkglTestCase_038003_1, VkglTestCase_038003_2);

#define VkglTestCase_038004_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_038004_2 "lue.get_uniform.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038004, VkglTestCase_038004_1, VkglTestCase_038004_2);
