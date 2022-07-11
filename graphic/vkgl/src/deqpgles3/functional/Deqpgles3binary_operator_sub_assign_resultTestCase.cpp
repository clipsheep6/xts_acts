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
#include "../ActsDeqpgles30011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010862_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010862_2 "_operator.sub_assign_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010862, VkglTestCase_010862_1, VkglTestCase_010862_2);

#define VkglTestCase_010863_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010863_2 "operator.sub_assign_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010863, VkglTestCase_010863_1, VkglTestCase_010863_2);

#define VkglTestCase_010864_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010864_2 "operator.sub_assign_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010864, VkglTestCase_010864_1, VkglTestCase_010864_2);

#define VkglTestCase_010865_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010865_2 "perator.sub_assign_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010865, VkglTestCase_010865_1, VkglTestCase_010865_2);

#define VkglTestCase_010866_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010866_2 "_operator.sub_assign_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010866, VkglTestCase_010866_1, VkglTestCase_010866_2);

#define VkglTestCase_010867_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010867_2 "operator.sub_assign_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010867, VkglTestCase_010867_1, VkglTestCase_010867_2);

#define VkglTestCase_010868_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010868_2 "y_operator.sub_assign_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010868, VkglTestCase_010868_1, VkglTestCase_010868_2);

#define VkglTestCase_010869_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010869_2 "_operator.sub_assign_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010869, VkglTestCase_010869_1, VkglTestCase_010869_2);

#define VkglTestCase_010870_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010870_2 "operator.sub_assign_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010870, VkglTestCase_010870_1, VkglTestCase_010870_2);

#define VkglTestCase_010871_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010871_2 "perator.sub_assign_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010871, VkglTestCase_010871_1, VkglTestCase_010871_2);

#define VkglTestCase_010872_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010872_2 "_operator.sub_assign_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010872, VkglTestCase_010872_1, VkglTestCase_010872_2);

#define VkglTestCase_010873_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010873_2 "operator.sub_assign_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010873, VkglTestCase_010873_1, VkglTestCase_010873_2);

#define VkglTestCase_010874_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010874_2 "y_operator.sub_assign_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010874, VkglTestCase_010874_1, VkglTestCase_010874_2);

#define VkglTestCase_010875_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010875_2 "_operator.sub_assign_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010875, VkglTestCase_010875_1, VkglTestCase_010875_2);

#define VkglTestCase_010876_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010876_2 "operator.sub_assign_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010876, VkglTestCase_010876_1, VkglTestCase_010876_2);

#define VkglTestCase_010877_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010877_2 "perator.sub_assign_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010877, VkglTestCase_010877_1, VkglTestCase_010877_2);

#define VkglTestCase_010878_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010878_2 "_operator.sub_assign_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010878, VkglTestCase_010878_1, VkglTestCase_010878_2);

#define VkglTestCase_010879_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010879_2 "operator.sub_assign_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010879, VkglTestCase_010879_1, VkglTestCase_010879_2);

#define VkglTestCase_010880_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010880_2 "y_operator.sub_assign_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010880, VkglTestCase_010880_1, VkglTestCase_010880_2);

#define VkglTestCase_010881_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010881_2 "_operator.sub_assign_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010881, VkglTestCase_010881_1, VkglTestCase_010881_2);

#define VkglTestCase_010882_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010882_2 "operator.sub_assign_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010882, VkglTestCase_010882_1, VkglTestCase_010882_2);

#define VkglTestCase_010883_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010883_2 "perator.sub_assign_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010883, VkglTestCase_010883_1, VkglTestCase_010883_2);

#define VkglTestCase_010884_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010884_2 "_operator.sub_assign_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010884, VkglTestCase_010884_1, VkglTestCase_010884_2);

#define VkglTestCase_010885_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010885_2 "operator.sub_assign_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010885, VkglTestCase_010885_1, VkglTestCase_010885_2);

#define VkglTestCase_010886_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010886_2 "y_operator.sub_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010886, VkglTestCase_010886_1, VkglTestCase_010886_2);

#define VkglTestCase_010887_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010887_2 "_operator.sub_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010887, VkglTestCase_010887_1, VkglTestCase_010887_2);

#define VkglTestCase_010888_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010888_2 "_operator.sub_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010888, VkglTestCase_010888_1, VkglTestCase_010888_2);

#define VkglTestCase_010889_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010889_2 "operator.sub_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010889, VkglTestCase_010889_1, VkglTestCase_010889_2);

#define VkglTestCase_010890_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010890_2 "_operator.sub_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010890, VkglTestCase_010890_1, VkglTestCase_010890_2);

#define VkglTestCase_010891_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010891_2 "operator.sub_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010891, VkglTestCase_010891_1, VkglTestCase_010891_2);

#define VkglTestCase_010892_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010892_2 "operator.sub_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010892, VkglTestCase_010892_1, VkglTestCase_010892_2);

#define VkglTestCase_010893_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010893_2 "perator.sub_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010893, VkglTestCase_010893_1, VkglTestCase_010893_2);

#define VkglTestCase_010894_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010894_2 "_operator.sub_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010894, VkglTestCase_010894_1, VkglTestCase_010894_2);

#define VkglTestCase_010895_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010895_2 "operator.sub_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010895, VkglTestCase_010895_1, VkglTestCase_010895_2);

#define VkglTestCase_010896_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010896_2 "operator.sub_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010896, VkglTestCase_010896_1, VkglTestCase_010896_2);

#define VkglTestCase_010897_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010897_2 "perator.sub_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010897, VkglTestCase_010897_1, VkglTestCase_010897_2);

#define VkglTestCase_010898_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010898_2 "_operator.sub_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010898, VkglTestCase_010898_1, VkglTestCase_010898_2);

#define VkglTestCase_010899_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010899_2 "operator.sub_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010899, VkglTestCase_010899_1, VkglTestCase_010899_2);

#define VkglTestCase_010900_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010900_2 "operator.sub_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010900, VkglTestCase_010900_1, VkglTestCase_010900_2);

#define VkglTestCase_010901_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010901_2 "perator.sub_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010901, VkglTestCase_010901_1, VkglTestCase_010901_2);

#define VkglTestCase_010902_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010902_2 "y_operator.sub_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010902, VkglTestCase_010902_1, VkglTestCase_010902_2);

#define VkglTestCase_010903_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010903_2 "_operator.sub_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010903, VkglTestCase_010903_1, VkglTestCase_010903_2);

#define VkglTestCase_010904_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010904_2 "_operator.sub_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010904, VkglTestCase_010904_1, VkglTestCase_010904_2);

#define VkglTestCase_010905_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010905_2 "operator.sub_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010905, VkglTestCase_010905_1, VkglTestCase_010905_2);

#define VkglTestCase_010906_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010906_2 "_operator.sub_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010906, VkglTestCase_010906_1, VkglTestCase_010906_2);

#define VkglTestCase_010907_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010907_2 "operator.sub_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010907, VkglTestCase_010907_1, VkglTestCase_010907_2);

#define VkglTestCase_010908_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010908_2 "_operator.sub_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010908, VkglTestCase_010908_1, VkglTestCase_010908_2);

#define VkglTestCase_010909_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010909_2 "operator.sub_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010909, VkglTestCase_010909_1, VkglTestCase_010909_2);

#define VkglTestCase_010910_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010910_2 "y_operator.sub_assign_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010910, VkglTestCase_010910_1, VkglTestCase_010910_2);

#define VkglTestCase_010911_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010911_2 "_operator.sub_assign_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010911, VkglTestCase_010911_1, VkglTestCase_010911_2);

#define VkglTestCase_010912_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010912_2 "operator.sub_assign_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010912, VkglTestCase_010912_1, VkglTestCase_010912_2);

#define VkglTestCase_010913_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010913_2 "perator.sub_assign_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010913, VkglTestCase_010913_1, VkglTestCase_010913_2);

#define VkglTestCase_010914_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010914_2 "_operator.sub_assign_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010914, VkglTestCase_010914_1, VkglTestCase_010914_2);

#define VkglTestCase_010915_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010915_2 "operator.sub_assign_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010915, VkglTestCase_010915_1, VkglTestCase_010915_2);

#define VkglTestCase_010916_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010916_2 "operator.sub_assign_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010916, VkglTestCase_010916_1, VkglTestCase_010916_2);

#define VkglTestCase_010917_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010917_2 "perator.sub_assign_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010917, VkglTestCase_010917_1, VkglTestCase_010917_2);

#define VkglTestCase_010918_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010918_2 "_operator.sub_assign_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010918, VkglTestCase_010918_1, VkglTestCase_010918_2);

#define VkglTestCase_010919_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010919_2 "operator.sub_assign_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010919, VkglTestCase_010919_1, VkglTestCase_010919_2);

#define VkglTestCase_010920_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010920_2 "operator.sub_assign_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010920, VkglTestCase_010920_1, VkglTestCase_010920_2);

#define VkglTestCase_010921_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010921_2 "perator.sub_assign_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010921, VkglTestCase_010921_1, VkglTestCase_010921_2);

#define VkglTestCase_010922_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010922_2 "_operator.sub_assign_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010922, VkglTestCase_010922_1, VkglTestCase_010922_2);

#define VkglTestCase_010923_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010923_2 "operator.sub_assign_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010923, VkglTestCase_010923_1, VkglTestCase_010923_2);

#define VkglTestCase_010924_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010924_2 "operator.sub_assign_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010924, VkglTestCase_010924_1, VkglTestCase_010924_2);

#define VkglTestCase_010925_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010925_2 "perator.sub_assign_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010925, VkglTestCase_010925_1, VkglTestCase_010925_2);

#define VkglTestCase_010926_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010926_2 "_operator.sub_assign_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010926, VkglTestCase_010926_1, VkglTestCase_010926_2);

#define VkglTestCase_010927_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010927_2 "operator.sub_assign_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010927, VkglTestCase_010927_1, VkglTestCase_010927_2);

#define VkglTestCase_010928_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010928_2 "_operator.sub_assign_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010928, VkglTestCase_010928_1, VkglTestCase_010928_2);

#define VkglTestCase_010929_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010929_2 "operator.sub_assign_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010929, VkglTestCase_010929_1, VkglTestCase_010929_2);

#define VkglTestCase_010930_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010930_2 "_operator.sub_assign_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010930, VkglTestCase_010930_1, VkglTestCase_010930_2);

#define VkglTestCase_010931_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010931_2 "operator.sub_assign_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010931, VkglTestCase_010931_1, VkglTestCase_010931_2);

#define VkglTestCase_010932_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010932_2 "_operator.sub_assign_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010932, VkglTestCase_010932_1, VkglTestCase_010932_2);

#define VkglTestCase_010933_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010933_2 "operator.sub_assign_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010933, VkglTestCase_010933_1, VkglTestCase_010933_2);

#define VkglTestCase_010934_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010934_2 "perator.sub_assign_result.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010934, VkglTestCase_010934_1, VkglTestCase_010934_2);

#define VkglTestCase_010935_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010935_2 "erator.sub_assign_result.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010935, VkglTestCase_010935_1, VkglTestCase_010935_2);

#define VkglTestCase_010936_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010936_2 "rator.sub_assign_result.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010936, VkglTestCase_010936_1, VkglTestCase_010936_2);

#define VkglTestCase_010937_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010937_2 "ator.sub_assign_result.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010937, VkglTestCase_010937_1, VkglTestCase_010937_2);

#define VkglTestCase_010938_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010938_2 "erator.sub_assign_result.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010938, VkglTestCase_010938_1, VkglTestCase_010938_2);

#define VkglTestCase_010939_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010939_2 "rator.sub_assign_result.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010939, VkglTestCase_010939_1, VkglTestCase_010939_2);

#define VkglTestCase_010940_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010940_2 "perator.sub_assign_result.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010940, VkglTestCase_010940_1, VkglTestCase_010940_2);

#define VkglTestCase_010941_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010941_2 "erator.sub_assign_result.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010941, VkglTestCase_010941_1, VkglTestCase_010941_2);

#define VkglTestCase_010942_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010942_2 "rator.sub_assign_result.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010942, VkglTestCase_010942_1, VkglTestCase_010942_2);

#define VkglTestCase_010943_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010943_2 "ator.sub_assign_result.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010943, VkglTestCase_010943_1, VkglTestCase_010943_2);

#define VkglTestCase_010944_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010944_2 "erator.sub_assign_result.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010944, VkglTestCase_010944_1, VkglTestCase_010944_2);

#define VkglTestCase_010945_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010945_2 "rator.sub_assign_result.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010945, VkglTestCase_010945_1, VkglTestCase_010945_2);

#define VkglTestCase_010946_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010946_2 "perator.sub_assign_result.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010946, VkglTestCase_010946_1, VkglTestCase_010946_2);

#define VkglTestCase_010947_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010947_2 "erator.sub_assign_result.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010947, VkglTestCase_010947_1, VkglTestCase_010947_2);

#define VkglTestCase_010948_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010948_2 "rator.sub_assign_result.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010948, VkglTestCase_010948_1, VkglTestCase_010948_2);

#define VkglTestCase_010949_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010949_2 "ator.sub_assign_result.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010949, VkglTestCase_010949_1, VkglTestCase_010949_2);

#define VkglTestCase_010950_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010950_2 "erator.sub_assign_result.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010950, VkglTestCase_010950_1, VkglTestCase_010950_2);

#define VkglTestCase_010951_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010951_2 "rator.sub_assign_result.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010951, VkglTestCase_010951_1, VkglTestCase_010951_2);

#define VkglTestCase_010952_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010952_2 "perator.sub_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010952, VkglTestCase_010952_1, VkglTestCase_010952_2);

#define VkglTestCase_010953_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010953_2 "erator.sub_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010953, VkglTestCase_010953_1, VkglTestCase_010953_2);

#define VkglTestCase_010954_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010954_2 "erator.sub_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010954, VkglTestCase_010954_1, VkglTestCase_010954_2);

#define VkglTestCase_010955_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010955_2 "rator.sub_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010955, VkglTestCase_010955_1, VkglTestCase_010955_2);

#define VkglTestCase_010956_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010956_2 "perator.sub_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010956, VkglTestCase_010956_1, VkglTestCase_010956_2);

#define VkglTestCase_010957_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010957_2 "erator.sub_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010957, VkglTestCase_010957_1, VkglTestCase_010957_2);

#define VkglTestCase_010958_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010958_2 "erator.sub_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010958, VkglTestCase_010958_1, VkglTestCase_010958_2);

#define VkglTestCase_010959_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010959_2 "rator.sub_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010959, VkglTestCase_010959_1, VkglTestCase_010959_2);

#define VkglTestCase_010960_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010960_2 "perator.sub_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010960, VkglTestCase_010960_1, VkglTestCase_010960_2);

#define VkglTestCase_010961_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010961_2 "erator.sub_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010961, VkglTestCase_010961_1, VkglTestCase_010961_2);

#define VkglTestCase_010962_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010962_2 "erator.sub_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010962, VkglTestCase_010962_1, VkglTestCase_010962_2);

#define VkglTestCase_010963_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010963_2 "rator.sub_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010963, VkglTestCase_010963_1, VkglTestCase_010963_2);

#define VkglTestCase_010964_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010964_2 "perator.sub_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010964, VkglTestCase_010964_1, VkglTestCase_010964_2);

#define VkglTestCase_010965_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010965_2 "erator.sub_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010965, VkglTestCase_010965_1, VkglTestCase_010965_2);

#define VkglTestCase_010966_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010966_2 "perator.sub_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010966, VkglTestCase_010966_1, VkglTestCase_010966_2);

#define VkglTestCase_010967_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010967_2 "erator.sub_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010967, VkglTestCase_010967_1, VkglTestCase_010967_2);

#define VkglTestCase_010968_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010968_2 "perator.sub_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010968, VkglTestCase_010968_1, VkglTestCase_010968_2);

#define VkglTestCase_010969_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010969_2 "erator.sub_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010969, VkglTestCase_010969_1, VkglTestCase_010969_2);

#define VkglTestCase_010970_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010970_2 "perator.sub_assign_result.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010970, VkglTestCase_010970_1, VkglTestCase_010970_2);

#define VkglTestCase_010971_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010971_2 "erator.sub_assign_result.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010971, VkglTestCase_010971_1, VkglTestCase_010971_2);

#define VkglTestCase_010972_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010972_2 "rator.sub_assign_result.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010972, VkglTestCase_010972_1, VkglTestCase_010972_2);

#define VkglTestCase_010973_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010973_2 "ator.sub_assign_result.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010973, VkglTestCase_010973_1, VkglTestCase_010973_2);

#define VkglTestCase_010974_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010974_2 "perator.sub_assign_result.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010974, VkglTestCase_010974_1, VkglTestCase_010974_2);

#define VkglTestCase_010975_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010975_2 "erator.sub_assign_result.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010975, VkglTestCase_010975_1, VkglTestCase_010975_2);

#define VkglTestCase_010976_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010976_2 "rator.sub_assign_result.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010976, VkglTestCase_010976_1, VkglTestCase_010976_2);

#define VkglTestCase_010977_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010977_2 "ator.sub_assign_result.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010977, VkglTestCase_010977_1, VkglTestCase_010977_2);

#define VkglTestCase_010978_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010978_2 "perator.sub_assign_result.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010978, VkglTestCase_010978_1, VkglTestCase_010978_2);

#define VkglTestCase_010979_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010979_2 "erator.sub_assign_result.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010979, VkglTestCase_010979_1, VkglTestCase_010979_2);

#define VkglTestCase_010980_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010980_2 "rator.sub_assign_result.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010980, VkglTestCase_010980_1, VkglTestCase_010980_2);

#define VkglTestCase_010981_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010981_2 "ator.sub_assign_result.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010981, VkglTestCase_010981_1, VkglTestCase_010981_2);

#define VkglTestCase_010982_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010982_2 "erator.sub_assign_result.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010982, VkglTestCase_010982_1, VkglTestCase_010982_2);

#define VkglTestCase_010983_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010983_2 "rator.sub_assign_result.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010983, VkglTestCase_010983_1, VkglTestCase_010983_2);

#define VkglTestCase_010984_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010984_2 "erator.sub_assign_result.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010984, VkglTestCase_010984_1, VkglTestCase_010984_2);

#define VkglTestCase_010985_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010985_2 "rator.sub_assign_result.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010985, VkglTestCase_010985_1, VkglTestCase_010985_2);

#define VkglTestCase_010986_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010986_2 "erator.sub_assign_result.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010986, VkglTestCase_010986_1, VkglTestCase_010986_2);

#define VkglTestCase_010987_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010987_2 "rator.sub_assign_result.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010987, VkglTestCase_010987_1, VkglTestCase_010987_2);
