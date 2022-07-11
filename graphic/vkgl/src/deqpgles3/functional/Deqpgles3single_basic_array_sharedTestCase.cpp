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
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034852_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034852_2 "_basic_array.shared.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034852, VkglTestCase_034852_1, VkglTestCase_034852_2);

#define VkglTestCase_034853_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034853_2 "basic_array.shared.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034853, VkglTestCase_034853_1, VkglTestCase_034853_2);

#define VkglTestCase_034854_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034854_2 "e_basic_array.shared.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034854, VkglTestCase_034854_1, VkglTestCase_034854_2);

#define VkglTestCase_034855_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034855_2 "e_basic_array.shared.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034855, VkglTestCase_034855_1, VkglTestCase_034855_2);

#define VkglTestCase_034856_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034856_2 "_basic_array.shared.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034856, VkglTestCase_034856_1, VkglTestCase_034856_2);

#define VkglTestCase_034857_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034857_2 "le_basic_array.shared.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034857, VkglTestCase_034857_1, VkglTestCase_034857_2);

#define VkglTestCase_034858_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034858_2 "e_basic_array.shared.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034858, VkglTestCase_034858_1, VkglTestCase_034858_2);

#define VkglTestCase_034859_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034859_2 "_basic_array.shared.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034859, VkglTestCase_034859_1, VkglTestCase_034859_2);

#define VkglTestCase_034860_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034860_2 "le_basic_array.shared.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034860, VkglTestCase_034860_1, VkglTestCase_034860_2);

#define VkglTestCase_034861_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034861_2 "e_basic_array.shared.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034861, VkglTestCase_034861_1, VkglTestCase_034861_2);

#define VkglTestCase_034862_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034862_2 "_basic_array.shared.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034862, VkglTestCase_034862_1, VkglTestCase_034862_2);

#define VkglTestCase_034863_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034863_2 "le_basic_array.shared.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034863, VkglTestCase_034863_1, VkglTestCase_034863_2);

#define VkglTestCase_034864_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034864_2 "e_basic_array.shared.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034864, VkglTestCase_034864_1, VkglTestCase_034864_2);

#define VkglTestCase_034865_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034865_2 "_basic_array.shared.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034865, VkglTestCase_034865_1, VkglTestCase_034865_2);

#define VkglTestCase_034866_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034866_2 "le_basic_array.shared.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034866, VkglTestCase_034866_1, VkglTestCase_034866_2);

#define VkglTestCase_034867_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034867_2 "_basic_array.shared.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034867, VkglTestCase_034867_1, VkglTestCase_034867_2);

#define VkglTestCase_034868_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034868_2 "basic_array.shared.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034868, VkglTestCase_034868_1, VkglTestCase_034868_2);

#define VkglTestCase_034869_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034869_2 "e_basic_array.shared.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034869, VkglTestCase_034869_1, VkglTestCase_034869_2);

#define VkglTestCase_034870_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034870_2 "_basic_array.shared.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034870, VkglTestCase_034870_1, VkglTestCase_034870_2);

#define VkglTestCase_034871_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034871_2 "basic_array.shared.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034871, VkglTestCase_034871_1, VkglTestCase_034871_2);

#define VkglTestCase_034872_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034872_2 "e_basic_array.shared.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034872, VkglTestCase_034872_1, VkglTestCase_034872_2);

#define VkglTestCase_034873_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034873_2 "_basic_array.shared.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034873, VkglTestCase_034873_1, VkglTestCase_034873_2);

#define VkglTestCase_034874_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034874_2 "basic_array.shared.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034874, VkglTestCase_034874_1, VkglTestCase_034874_2);

#define VkglTestCase_034875_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034875_2 "e_basic_array.shared.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034875, VkglTestCase_034875_1, VkglTestCase_034875_2);

#define VkglTestCase_034876_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034876_2 "e_basic_array.shared.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034876, VkglTestCase_034876_1, VkglTestCase_034876_2);

#define VkglTestCase_034877_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034877_2 "_basic_array.shared.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034877, VkglTestCase_034877_1, VkglTestCase_034877_2);

#define VkglTestCase_034878_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034878_2 "le_basic_array.shared.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034878, VkglTestCase_034878_1, VkglTestCase_034878_2);

#define VkglTestCase_034879_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034879_2 "_basic_array.shared.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034879, VkglTestCase_034879_1, VkglTestCase_034879_2);

#define VkglTestCase_034880_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034880_2 "basic_array.shared.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034880, VkglTestCase_034880_1, VkglTestCase_034880_2);

#define VkglTestCase_034881_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034881_2 "e_basic_array.shared.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034881, VkglTestCase_034881_1, VkglTestCase_034881_2);

#define VkglTestCase_034882_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034882_2 "_basic_array.shared.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034882, VkglTestCase_034882_1, VkglTestCase_034882_2);

#define VkglTestCase_034883_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034883_2 "basic_array.shared.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034883, VkglTestCase_034883_1, VkglTestCase_034883_2);

#define VkglTestCase_034884_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034884_2 "e_basic_array.shared.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034884, VkglTestCase_034884_1, VkglTestCase_034884_2);

#define VkglTestCase_034885_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034885_2 "_basic_array.shared.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034885, VkglTestCase_034885_1, VkglTestCase_034885_2);

#define VkglTestCase_034886_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034886_2 "basic_array.shared.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034886, VkglTestCase_034886_1, VkglTestCase_034886_2);

#define VkglTestCase_034887_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034887_2 "e_basic_array.shared.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034887, VkglTestCase_034887_1, VkglTestCase_034887_2);

#define VkglTestCase_034888_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034888_2 "e_basic_array.shared.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034888, VkglTestCase_034888_1, VkglTestCase_034888_2);

#define VkglTestCase_034889_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034889_2 "_basic_array.shared.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034889, VkglTestCase_034889_1, VkglTestCase_034889_2);

#define VkglTestCase_034890_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034890_2 "le_basic_array.shared.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034890, VkglTestCase_034890_1, VkglTestCase_034890_2);

#define VkglTestCase_034891_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034891_2 "_basic_array.shared.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034891, VkglTestCase_034891_1, VkglTestCase_034891_2);

#define VkglTestCase_034892_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034892_2 "basic_array.shared.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034892, VkglTestCase_034892_1, VkglTestCase_034892_2);

#define VkglTestCase_034893_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034893_2 "e_basic_array.shared.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034893, VkglTestCase_034893_1, VkglTestCase_034893_2);

#define VkglTestCase_034894_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034894_2 "_basic_array.shared.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034894, VkglTestCase_034894_1, VkglTestCase_034894_2);

#define VkglTestCase_034895_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034895_2 "basic_array.shared.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034895, VkglTestCase_034895_1, VkglTestCase_034895_2);

#define VkglTestCase_034896_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034896_2 "e_basic_array.shared.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034896, VkglTestCase_034896_1, VkglTestCase_034896_2);

#define VkglTestCase_034897_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034897_2 "_basic_array.shared.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034897, VkglTestCase_034897_1, VkglTestCase_034897_2);

#define VkglTestCase_034898_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034898_2 "basic_array.shared.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034898, VkglTestCase_034898_1, VkglTestCase_034898_2);

#define VkglTestCase_034899_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034899_2 "e_basic_array.shared.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034899, VkglTestCase_034899_1, VkglTestCase_034899_2);

#define VkglTestCase_034900_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034900_2 "e_basic_array.shared.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034900, VkglTestCase_034900_1, VkglTestCase_034900_2);

#define VkglTestCase_034901_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034901_2 "_basic_array.shared.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034901, VkglTestCase_034901_1, VkglTestCase_034901_2);

#define VkglTestCase_034902_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034902_2 "le_basic_array.shared.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034902, VkglTestCase_034902_1, VkglTestCase_034902_2);

#define VkglTestCase_034903_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034903_2 "ic_array.shared.row_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034903, VkglTestCase_034903_1, VkglTestCase_034903_2);

#define VkglTestCase_034904_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034904_2 "c_array.shared.row_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034904, VkglTestCase_034904_1, VkglTestCase_034904_2);

#define VkglTestCase_034905_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034905_2 "sic_array.shared.row_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034905, VkglTestCase_034905_1, VkglTestCase_034905_2);

#define VkglTestCase_034906_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034906_2 "_array.shared.column_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034906, VkglTestCase_034906_1, VkglTestCase_034906_2);

#define VkglTestCase_034907_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034907_2 "array.shared.column_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034907, VkglTestCase_034907_1, VkglTestCase_034907_2);

#define VkglTestCase_034908_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034908_2 "c_array.shared.column_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034908, VkglTestCase_034908_1, VkglTestCase_034908_2);

#define VkglTestCase_034909_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034909_2 "e_basic_array.shared.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034909, VkglTestCase_034909_1, VkglTestCase_034909_2);

#define VkglTestCase_034910_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034910_2 "_basic_array.shared.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034910, VkglTestCase_034910_1, VkglTestCase_034910_2);

#define VkglTestCase_034911_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034911_2 "le_basic_array.shared.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034911, VkglTestCase_034911_1, VkglTestCase_034911_2);

#define VkglTestCase_034912_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034912_2 "ic_array.shared.row_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034912, VkglTestCase_034912_1, VkglTestCase_034912_2);

#define VkglTestCase_034913_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034913_2 "c_array.shared.row_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034913, VkglTestCase_034913_1, VkglTestCase_034913_2);

#define VkglTestCase_034914_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034914_2 "sic_array.shared.row_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034914, VkglTestCase_034914_1, VkglTestCase_034914_2);

#define VkglTestCase_034915_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034915_2 "_array.shared.column_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034915, VkglTestCase_034915_1, VkglTestCase_034915_2);

#define VkglTestCase_034916_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034916_2 "array.shared.column_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034916, VkglTestCase_034916_1, VkglTestCase_034916_2);

#define VkglTestCase_034917_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034917_2 "c_array.shared.column_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034917, VkglTestCase_034917_1, VkglTestCase_034917_2);

#define VkglTestCase_034918_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034918_2 "e_basic_array.shared.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034918, VkglTestCase_034918_1, VkglTestCase_034918_2);

#define VkglTestCase_034919_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034919_2 "_basic_array.shared.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034919, VkglTestCase_034919_1, VkglTestCase_034919_2);

#define VkglTestCase_034920_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034920_2 "le_basic_array.shared.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034920, VkglTestCase_034920_1, VkglTestCase_034920_2);

#define VkglTestCase_034921_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034921_2 "ic_array.shared.row_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034921, VkglTestCase_034921_1, VkglTestCase_034921_2);

#define VkglTestCase_034922_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034922_2 "c_array.shared.row_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034922, VkglTestCase_034922_1, VkglTestCase_034922_2);

#define VkglTestCase_034923_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034923_2 "sic_array.shared.row_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034923, VkglTestCase_034923_1, VkglTestCase_034923_2);

#define VkglTestCase_034924_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034924_2 "_array.shared.column_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034924, VkglTestCase_034924_1, VkglTestCase_034924_2);

#define VkglTestCase_034925_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034925_2 "array.shared.column_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034925, VkglTestCase_034925_1, VkglTestCase_034925_2);

#define VkglTestCase_034926_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034926_2 "c_array.shared.column_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034926, VkglTestCase_034926_1, VkglTestCase_034926_2);

#define VkglTestCase_034927_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034927_2 "_basic_array.shared.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034927, VkglTestCase_034927_1, VkglTestCase_034927_2);

#define VkglTestCase_034928_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034928_2 "basic_array.shared.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034928, VkglTestCase_034928_1, VkglTestCase_034928_2);

#define VkglTestCase_034929_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034929_2 "e_basic_array.shared.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034929, VkglTestCase_034929_1, VkglTestCase_034929_2);

#define VkglTestCase_034930_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034930_2 "c_array.shared.row_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034930, VkglTestCase_034930_1, VkglTestCase_034930_2);

#define VkglTestCase_034931_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034931_2 "_array.shared.row_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034931, VkglTestCase_034931_1, VkglTestCase_034931_2);

#define VkglTestCase_034932_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034932_2 "ic_array.shared.row_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034932, VkglTestCase_034932_1, VkglTestCase_034932_2);

#define VkglTestCase_034933_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034933_2 "array.shared.column_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034933, VkglTestCase_034933_1, VkglTestCase_034933_2);

#define VkglTestCase_034934_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_034934_2 "rray.shared.column_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034934, VkglTestCase_034934_1, VkglTestCase_034934_2);

#define VkglTestCase_034935_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034935_2 "_array.shared.column_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034935, VkglTestCase_034935_1, VkglTestCase_034935_2);

#define VkglTestCase_034936_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034936_2 "_basic_array.shared.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034936, VkglTestCase_034936_1, VkglTestCase_034936_2);

#define VkglTestCase_034937_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034937_2 "basic_array.shared.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034937, VkglTestCase_034937_1, VkglTestCase_034937_2);

#define VkglTestCase_034938_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034938_2 "e_basic_array.shared.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034938, VkglTestCase_034938_1, VkglTestCase_034938_2);

#define VkglTestCase_034939_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034939_2 "c_array.shared.row_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034939, VkglTestCase_034939_1, VkglTestCase_034939_2);

#define VkglTestCase_034940_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034940_2 "_array.shared.row_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034940, VkglTestCase_034940_1, VkglTestCase_034940_2);

#define VkglTestCase_034941_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034941_2 "ic_array.shared.row_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034941, VkglTestCase_034941_1, VkglTestCase_034941_2);

#define VkglTestCase_034942_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034942_2 "array.shared.column_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034942, VkglTestCase_034942_1, VkglTestCase_034942_2);

#define VkglTestCase_034943_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_034943_2 "rray.shared.column_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034943, VkglTestCase_034943_1, VkglTestCase_034943_2);

#define VkglTestCase_034944_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034944_2 "_array.shared.column_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034944, VkglTestCase_034944_1, VkglTestCase_034944_2);

#define VkglTestCase_034945_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034945_2 "_basic_array.shared.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034945, VkglTestCase_034945_1, VkglTestCase_034945_2);

#define VkglTestCase_034946_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034946_2 "basic_array.shared.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034946, VkglTestCase_034946_1, VkglTestCase_034946_2);

#define VkglTestCase_034947_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034947_2 "e_basic_array.shared.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034947, VkglTestCase_034947_1, VkglTestCase_034947_2);

#define VkglTestCase_034948_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034948_2 "c_array.shared.row_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034948, VkglTestCase_034948_1, VkglTestCase_034948_2);

#define VkglTestCase_034949_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034949_2 "_array.shared.row_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034949, VkglTestCase_034949_1, VkglTestCase_034949_2);

#define VkglTestCase_034950_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034950_2 "ic_array.shared.row_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034950, VkglTestCase_034950_1, VkglTestCase_034950_2);

#define VkglTestCase_034951_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034951_2 "array.shared.column_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034951, VkglTestCase_034951_1, VkglTestCase_034951_2);

#define VkglTestCase_034952_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_034952_2 "rray.shared.column_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034952, VkglTestCase_034952_1, VkglTestCase_034952_2);

#define VkglTestCase_034953_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034953_2 "_array.shared.column_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034953, VkglTestCase_034953_1, VkglTestCase_034953_2);

#define VkglTestCase_034954_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034954_2 "_basic_array.shared.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034954, VkglTestCase_034954_1, VkglTestCase_034954_2);

#define VkglTestCase_034955_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034955_2 "basic_array.shared.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034955, VkglTestCase_034955_1, VkglTestCase_034955_2);

#define VkglTestCase_034956_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034956_2 "e_basic_array.shared.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034956, VkglTestCase_034956_1, VkglTestCase_034956_2);

#define VkglTestCase_034957_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034957_2 "c_array.shared.row_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034957, VkglTestCase_034957_1, VkglTestCase_034957_2);

#define VkglTestCase_034958_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034958_2 "_array.shared.row_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034958, VkglTestCase_034958_1, VkglTestCase_034958_2);

#define VkglTestCase_034959_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034959_2 "ic_array.shared.row_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034959, VkglTestCase_034959_1, VkglTestCase_034959_2);

#define VkglTestCase_034960_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034960_2 "array.shared.column_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034960, VkglTestCase_034960_1, VkglTestCase_034960_2);

#define VkglTestCase_034961_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_034961_2 "rray.shared.column_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034961, VkglTestCase_034961_1, VkglTestCase_034961_2);

#define VkglTestCase_034962_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034962_2 "_array.shared.column_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034962, VkglTestCase_034962_1, VkglTestCase_034962_2);

#define VkglTestCase_034963_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034963_2 "_basic_array.shared.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034963, VkglTestCase_034963_1, VkglTestCase_034963_2);

#define VkglTestCase_034964_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034964_2 "basic_array.shared.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034964, VkglTestCase_034964_1, VkglTestCase_034964_2);

#define VkglTestCase_034965_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034965_2 "e_basic_array.shared.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034965, VkglTestCase_034965_1, VkglTestCase_034965_2);

#define VkglTestCase_034966_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034966_2 "c_array.shared.row_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034966, VkglTestCase_034966_1, VkglTestCase_034966_2);

#define VkglTestCase_034967_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034967_2 "_array.shared.row_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034967, VkglTestCase_034967_1, VkglTestCase_034967_2);

#define VkglTestCase_034968_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034968_2 "ic_array.shared.row_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034968, VkglTestCase_034968_1, VkglTestCase_034968_2);

#define VkglTestCase_034969_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034969_2 "array.shared.column_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034969, VkglTestCase_034969_1, VkglTestCase_034969_2);

#define VkglTestCase_034970_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_034970_2 "rray.shared.column_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034970, VkglTestCase_034970_1, VkglTestCase_034970_2);

#define VkglTestCase_034971_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034971_2 "_array.shared.column_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034971, VkglTestCase_034971_1, VkglTestCase_034971_2);

#define VkglTestCase_034972_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034972_2 "_basic_array.shared.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034972, VkglTestCase_034972_1, VkglTestCase_034972_2);

#define VkglTestCase_034973_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034973_2 "basic_array.shared.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034973, VkglTestCase_034973_1, VkglTestCase_034973_2);

#define VkglTestCase_034974_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034974_2 "e_basic_array.shared.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034974, VkglTestCase_034974_1, VkglTestCase_034974_2);

#define VkglTestCase_034975_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034975_2 "c_array.shared.row_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034975, VkglTestCase_034975_1, VkglTestCase_034975_2);

#define VkglTestCase_034976_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034976_2 "_array.shared.row_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034976, VkglTestCase_034976_1, VkglTestCase_034976_2);

#define VkglTestCase_034977_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034977_2 "ic_array.shared.row_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034977, VkglTestCase_034977_1, VkglTestCase_034977_2);

#define VkglTestCase_034978_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034978_2 "array.shared.column_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034978, VkglTestCase_034978_1, VkglTestCase_034978_2);

#define VkglTestCase_034979_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_034979_2 "rray.shared.column_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034979, VkglTestCase_034979_1, VkglTestCase_034979_2);

#define VkglTestCase_034980_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034980_2 "_array.shared.column_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034980, VkglTestCase_034980_1, VkglTestCase_034980_2);
