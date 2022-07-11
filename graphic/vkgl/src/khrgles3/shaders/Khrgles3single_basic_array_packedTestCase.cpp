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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001882_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001882_2 ".single_basic_array.packed.float"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001882, VkglTestCase_001882_1, VkglTestCase_001882_2);

#define VkglTestCase_001883_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001883_2 ".single_basic_array.packed.vec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001883, VkglTestCase_001883_1, VkglTestCase_001883_2);

#define VkglTestCase_001884_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001884_2 ".single_basic_array.packed.vec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001884, VkglTestCase_001884_1, VkglTestCase_001884_2);

#define VkglTestCase_001885_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001885_2 ".single_basic_array.packed.vec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001885, VkglTestCase_001885_1, VkglTestCase_001885_2);

#define VkglTestCase_001886_1 "KHR-GLES3.shaders.uniform_bloc"
#define VkglTestCase_001886_2 "k.single_basic_array.packed.int"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001886, VkglTestCase_001886_1, VkglTestCase_001886_2);

#define VkglTestCase_001887_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001887_2 ".single_basic_array.packed.ivec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001887, VkglTestCase_001887_1, VkglTestCase_001887_2);

#define VkglTestCase_001888_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001888_2 ".single_basic_array.packed.ivec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001888, VkglTestCase_001888_1, VkglTestCase_001888_2);

#define VkglTestCase_001889_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001889_2 ".single_basic_array.packed.ivec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001889, VkglTestCase_001889_1, VkglTestCase_001889_2);

#define VkglTestCase_001890_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001890_2 ".single_basic_array.packed.uint"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001890, VkglTestCase_001890_1, VkglTestCase_001890_2);

#define VkglTestCase_001891_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001891_2 ".single_basic_array.packed.uvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001891, VkglTestCase_001891_1, VkglTestCase_001891_2);

#define VkglTestCase_001892_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001892_2 ".single_basic_array.packed.uvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001892, VkglTestCase_001892_1, VkglTestCase_001892_2);

#define VkglTestCase_001893_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001893_2 ".single_basic_array.packed.uvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001893, VkglTestCase_001893_1, VkglTestCase_001893_2);

#define VkglTestCase_001894_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001894_2 ".single_basic_array.packed.bool"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001894, VkglTestCase_001894_1, VkglTestCase_001894_2);

#define VkglTestCase_001895_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001895_2 ".single_basic_array.packed.bvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001895, VkglTestCase_001895_1, VkglTestCase_001895_2);

#define VkglTestCase_001896_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001896_2 ".single_basic_array.packed.bvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001896, VkglTestCase_001896_1, VkglTestCase_001896_2);

#define VkglTestCase_001897_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001897_2 ".single_basic_array.packed.bvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001897, VkglTestCase_001897_1, VkglTestCase_001897_2);

#define VkglTestCase_001898_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001898_2 ".single_basic_array.packed.mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001898, VkglTestCase_001898_1, VkglTestCase_001898_2);

#define VkglTestCase_001899_1 "KHR-GLES3.shaders.uniform_block.sing"
#define VkglTestCase_001899_2 "le_basic_array.packed.row_major_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001899, VkglTestCase_001899_1, VkglTestCase_001899_2);

#define VkglTestCase_001900_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001900_2 "e_basic_array.packed.column_major_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001900, VkglTestCase_001900_1, VkglTestCase_001900_2);

#define VkglTestCase_001901_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001901_2 ".single_basic_array.packed.mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001901, VkglTestCase_001901_1, VkglTestCase_001901_2);

#define VkglTestCase_001902_1 "KHR-GLES3.shaders.uniform_block.sing"
#define VkglTestCase_001902_2 "le_basic_array.packed.row_major_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001902, VkglTestCase_001902_1, VkglTestCase_001902_2);

#define VkglTestCase_001903_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001903_2 "e_basic_array.packed.column_major_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001903, VkglTestCase_001903_1, VkglTestCase_001903_2);

#define VkglTestCase_001904_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001904_2 ".single_basic_array.packed.mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001904, VkglTestCase_001904_1, VkglTestCase_001904_2);

#define VkglTestCase_001905_1 "KHR-GLES3.shaders.uniform_block.sing"
#define VkglTestCase_001905_2 "le_basic_array.packed.row_major_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001905, VkglTestCase_001905_1, VkglTestCase_001905_2);

#define VkglTestCase_001906_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001906_2 "e_basic_array.packed.column_major_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001906, VkglTestCase_001906_1, VkglTestCase_001906_2);

#define VkglTestCase_001907_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001907_2 "single_basic_array.packed.mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001907, VkglTestCase_001907_1, VkglTestCase_001907_2);

#define VkglTestCase_001908_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001908_2 "e_basic_array.packed.row_major_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001908, VkglTestCase_001908_1, VkglTestCase_001908_2);

#define VkglTestCase_001909_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001909_2 "_basic_array.packed.column_major_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001909, VkglTestCase_001909_1, VkglTestCase_001909_2);

#define VkglTestCase_001910_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001910_2 "single_basic_array.packed.mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001910, VkglTestCase_001910_1, VkglTestCase_001910_2);

#define VkglTestCase_001911_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001911_2 "e_basic_array.packed.row_major_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001911, VkglTestCase_001911_1, VkglTestCase_001911_2);

#define VkglTestCase_001912_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001912_2 "_basic_array.packed.column_major_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001912, VkglTestCase_001912_1, VkglTestCase_001912_2);

#define VkglTestCase_001913_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001913_2 "single_basic_array.packed.mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001913, VkglTestCase_001913_1, VkglTestCase_001913_2);

#define VkglTestCase_001914_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001914_2 "e_basic_array.packed.row_major_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001914, VkglTestCase_001914_1, VkglTestCase_001914_2);

#define VkglTestCase_001915_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001915_2 "_basic_array.packed.column_major_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001915, VkglTestCase_001915_1, VkglTestCase_001915_2);

#define VkglTestCase_001916_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001916_2 "single_basic_array.packed.mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001916, VkglTestCase_001916_1, VkglTestCase_001916_2);

#define VkglTestCase_001917_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001917_2 "e_basic_array.packed.row_major_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001917, VkglTestCase_001917_1, VkglTestCase_001917_2);

#define VkglTestCase_001918_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001918_2 "_basic_array.packed.column_major_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001918, VkglTestCase_001918_1, VkglTestCase_001918_2);

#define VkglTestCase_001919_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001919_2 "single_basic_array.packed.mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001919, VkglTestCase_001919_1, VkglTestCase_001919_2);

#define VkglTestCase_001920_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001920_2 "e_basic_array.packed.row_major_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001920, VkglTestCase_001920_1, VkglTestCase_001920_2);

#define VkglTestCase_001921_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001921_2 "_basic_array.packed.column_major_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001921, VkglTestCase_001921_1, VkglTestCase_001921_2);

#define VkglTestCase_001922_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001922_2 "single_basic_array.packed.mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001922, VkglTestCase_001922_1, VkglTestCase_001922_2);

#define VkglTestCase_001923_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001923_2 "e_basic_array.packed.row_major_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001923, VkglTestCase_001923_1, VkglTestCase_001923_2);

#define VkglTestCase_001924_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001924_2 "_basic_array.packed.column_major_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001924, VkglTestCase_001924_1, VkglTestCase_001924_2);
