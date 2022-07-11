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
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020201_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020201_2 "uniform.array_size.default_block.aggregates.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020201, VkglTestCase_020201_1, VkglTestCase_020201_2);

#define VkglTestCase_020202_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020202_2 "form.array_size.default_block.aggregates.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020202, VkglTestCase_020202_1, VkglTestCase_020202_2);

#define VkglTestCase_020203_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020203_2 ".array_size.default_block.aggregates.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020203, VkglTestCase_020203_1, VkglTestCase_020203_2);

#define VkglTestCase_020204_1 "dEQP-GLES31.functional.program_interface_query.uniform.ar"
#define VkglTestCase_020204_2 "ray_size.default_block.aggregates.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020204, VkglTestCase_020204_1, VkglTestCase_020204_2);

#define VkglTestCase_020205_1 "dEQP-GLES31.functional.program_interface_query.uniform.ar"
#define VkglTestCase_020205_2 "ray_size.default_block.aggregates.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020205, VkglTestCase_020205_1, VkglTestCase_020205_2);

#define VkglTestCase_020206_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020206_2 "m.array_size.default_block.aggregates.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020206, VkglTestCase_020206_1, VkglTestCase_020206_2);

#define VkglTestCase_020207_1 "dEQP-GLES31.functional.program_interface_query.uniform.ar"
#define VkglTestCase_020207_2 "ray_size.default_block.aggregates.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020207, VkglTestCase_020207_1, VkglTestCase_020207_2);

#define VkglTestCase_020208_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020208_2 "rray_size.default_block.aggregates.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020208, VkglTestCase_020208_1, VkglTestCase_020208_2);

#define VkglTestCase_020209_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020209_2 "form.array_size.default_block.aggregates.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020209, VkglTestCase_020209_1, VkglTestCase_020209_2);

#define VkglTestCase_020210_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020210_2 "m.array_size.default_block.aggregates.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020210, VkglTestCase_020210_1, VkglTestCase_020210_2);

#define VkglTestCase_020211_1 "dEQP-GLES31.functional.program_interface_query.uniform.ar"
#define VkglTestCase_020211_2 "ray_size.default_block.aggregates.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020211, VkglTestCase_020211_1, VkglTestCase_020211_2);

#define VkglTestCase_020212_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020212_2 "rray_size.default_block.aggregates.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020212, VkglTestCase_020212_1, VkglTestCase_020212_2);

#define VkglTestCase_020213_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020213_2 "m.array_size.default_block.aggregates.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020213, VkglTestCase_020213_1, VkglTestCase_020213_2);

#define VkglTestCase_020214_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020214_2 "rray_size.default_block.aggregates.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020214, VkglTestCase_020214_1, VkglTestCase_020214_2);

#define VkglTestCase_020215_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020215_2 "rray_size.default_block.aggregates.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020215, VkglTestCase_020215_1, VkglTestCase_020215_2);

#define VkglTestCase_020286_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020286_2 ".array_stride.default_block.aggregates.sampler2D_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020286, VkglTestCase_020286_1, VkglTestCase_020286_2);

#define VkglTestCase_020287_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020287_2 ".array_stride.default_block.aggregates.sampler2D_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020287, VkglTestCase_020287_1, VkglTestCase_020287_2);

#define VkglTestCase_020288_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020288_2 "array_stride.default_block.aggregates.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020288, VkglTestCase_020288_1, VkglTestCase_020288_2);

#define VkglTestCase_020289_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020289_2 "rm.array_stride.default_block.aggregates.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020289, VkglTestCase_020289_1, VkglTestCase_020289_2);

#define VkglTestCase_020290_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020290_2 "rray_stride.default_block.aggregates.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020290, VkglTestCase_020290_1, VkglTestCase_020290_2);

#define VkglTestCase_020291_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020291_2 "array_stride.default_block.aggregates.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020291, VkglTestCase_020291_1, VkglTestCase_020291_2);

#define VkglTestCase_020292_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020292_2 "rm.array_stride.default_block.aggregates.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020292, VkglTestCase_020292_1, VkglTestCase_020292_2);

#define VkglTestCase_020293_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020293_2 "array_stride.default_block.aggregates.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020293, VkglTestCase_020293_1, VkglTestCase_020293_2);

#define VkglTestCase_020294_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020294_2 "array_stride.default_block.aggregates.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020294, VkglTestCase_020294_1, VkglTestCase_020294_2);

#define VkglTestCase_020295_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020295_2 "rm.array_stride.default_block.aggregates.bool_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020295, VkglTestCase_020295_1, VkglTestCase_020295_2);

#define VkglTestCase_020296_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020296_2 "orm.array_stride.default_block.aggregates.bool_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020296, VkglTestCase_020296_1, VkglTestCase_020296_2);

#define VkglTestCase_020297_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020297_2 "rm.array_stride.default_block.aggregates.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020297, VkglTestCase_020297_1, VkglTestCase_020297_2);

#define VkglTestCase_020298_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020298_2 "rray_stride.default_block.aggregates.bvec3_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020298, VkglTestCase_020298_1, VkglTestCase_020298_2);

#define VkglTestCase_020299_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020299_2 "array_stride.default_block.aggregates.bvec3_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020299, VkglTestCase_020299_1, VkglTestCase_020299_2);

#define VkglTestCase_020300_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020300_2 "rm.array_stride.default_block.aggregates.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020300, VkglTestCase_020300_1, VkglTestCase_020300_2);

#define VkglTestCase_020301_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020301_2 "array_stride.default_block.aggregates.bvec3_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020301, VkglTestCase_020301_1, VkglTestCase_020301_2);

#define VkglTestCase_020302_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020302_2 "array_stride.default_block.aggregates.bvec3_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020302, VkglTestCase_020302_1, VkglTestCase_020302_2);

#define VkglTestCase_020303_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020303_2 "rm.array_stride.default_block.aggregates.vec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020303, VkglTestCase_020303_1, VkglTestCase_020303_2);

#define VkglTestCase_020304_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020304_2 "array_stride.default_block.aggregates.vec3_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020304, VkglTestCase_020304_1, VkglTestCase_020304_2);

#define VkglTestCase_020305_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020305_2 "array_stride.default_block.aggregates.vec3_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020305, VkglTestCase_020305_1, VkglTestCase_020305_2);

#define VkglTestCase_020306_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020306_2 "orm.array_stride.default_block.aggregates.vec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020306, VkglTestCase_020306_1, VkglTestCase_020306_2);

#define VkglTestCase_020307_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020307_2 "array_stride.default_block.aggregates.vec3_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020307, VkglTestCase_020307_1, VkglTestCase_020307_2);

#define VkglTestCase_020308_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020308_2 ".array_stride.default_block.aggregates.vec3_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020308, VkglTestCase_020308_1, VkglTestCase_020308_2);

#define VkglTestCase_020309_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020309_2 "rm.array_stride.default_block.aggregates.ivec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020309, VkglTestCase_020309_1, VkglTestCase_020309_2);

#define VkglTestCase_020310_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020310_2 "rray_stride.default_block.aggregates.ivec3_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020310, VkglTestCase_020310_1, VkglTestCase_020310_2);

#define VkglTestCase_020311_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020311_2 "array_stride.default_block.aggregates.ivec3_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020311, VkglTestCase_020311_1, VkglTestCase_020311_2);

#define VkglTestCase_020312_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020312_2 "rm.array_stride.default_block.aggregates.ivec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020312, VkglTestCase_020312_1, VkglTestCase_020312_2);

#define VkglTestCase_020313_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020313_2 "array_stride.default_block.aggregates.ivec3_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020313, VkglTestCase_020313_1, VkglTestCase_020313_2);

#define VkglTestCase_020314_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020314_2 "array_stride.default_block.aggregates.ivec3_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020314, VkglTestCase_020314_1, VkglTestCase_020314_2);

#define VkglTestCase_020896_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020896_2 "rm.offset.default_block.aggregates.atomic_uint_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020896, VkglTestCase_020896_1, VkglTestCase_020896_2);

#define VkglTestCase_020897_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020897_2 "iform.offset.default_block.aggregates.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020897, VkglTestCase_020897_1, VkglTestCase_020897_2);

#define VkglTestCase_020898_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020898_2 "iform.offset.default_block.aggregates.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020898, VkglTestCase_020898_1, VkglTestCase_020898_2);
