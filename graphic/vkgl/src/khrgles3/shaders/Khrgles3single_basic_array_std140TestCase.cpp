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

#define VkglTestCase_001925_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001925_2 ".single_basic_array.std140.float"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001925, VkglTestCase_001925_1, VkglTestCase_001925_2);

#define VkglTestCase_001926_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001926_2 ".single_basic_array.std140.vec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001926, VkglTestCase_001926_1, VkglTestCase_001926_2);

#define VkglTestCase_001927_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001927_2 ".single_basic_array.std140.vec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001927, VkglTestCase_001927_1, VkglTestCase_001927_2);

#define VkglTestCase_001928_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001928_2 ".single_basic_array.std140.vec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001928, VkglTestCase_001928_1, VkglTestCase_001928_2);

#define VkglTestCase_001929_1 "KHR-GLES3.shaders.uniform_bloc"
#define VkglTestCase_001929_2 "k.single_basic_array.std140.int"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001929, VkglTestCase_001929_1, VkglTestCase_001929_2);

#define VkglTestCase_001930_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001930_2 ".single_basic_array.std140.ivec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001930, VkglTestCase_001930_1, VkglTestCase_001930_2);

#define VkglTestCase_001931_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001931_2 ".single_basic_array.std140.ivec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001931, VkglTestCase_001931_1, VkglTestCase_001931_2);

#define VkglTestCase_001932_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001932_2 ".single_basic_array.std140.ivec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001932, VkglTestCase_001932_1, VkglTestCase_001932_2);

#define VkglTestCase_001933_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001933_2 ".single_basic_array.std140.uint"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001933, VkglTestCase_001933_1, VkglTestCase_001933_2);

#define VkglTestCase_001934_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001934_2 ".single_basic_array.std140.uvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001934, VkglTestCase_001934_1, VkglTestCase_001934_2);

#define VkglTestCase_001935_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001935_2 ".single_basic_array.std140.uvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001935, VkglTestCase_001935_1, VkglTestCase_001935_2);

#define VkglTestCase_001936_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001936_2 ".single_basic_array.std140.uvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001936, VkglTestCase_001936_1, VkglTestCase_001936_2);

#define VkglTestCase_001937_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001937_2 ".single_basic_array.std140.bool"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001937, VkglTestCase_001937_1, VkglTestCase_001937_2);

#define VkglTestCase_001938_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001938_2 ".single_basic_array.std140.bvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001938, VkglTestCase_001938_1, VkglTestCase_001938_2);

#define VkglTestCase_001939_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001939_2 ".single_basic_array.std140.bvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001939, VkglTestCase_001939_1, VkglTestCase_001939_2);

#define VkglTestCase_001940_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001940_2 ".single_basic_array.std140.bvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001940, VkglTestCase_001940_1, VkglTestCase_001940_2);

#define VkglTestCase_001941_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001941_2 ".single_basic_array.std140.mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001941, VkglTestCase_001941_1, VkglTestCase_001941_2);

#define VkglTestCase_001942_1 "KHR-GLES3.shaders.uniform_block.sing"
#define VkglTestCase_001942_2 "le_basic_array.std140.row_major_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001942, VkglTestCase_001942_1, VkglTestCase_001942_2);

#define VkglTestCase_001943_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001943_2 "e_basic_array.std140.column_major_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001943, VkglTestCase_001943_1, VkglTestCase_001943_2);

#define VkglTestCase_001944_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001944_2 ".single_basic_array.std140.mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001944, VkglTestCase_001944_1, VkglTestCase_001944_2);

#define VkglTestCase_001945_1 "KHR-GLES3.shaders.uniform_block.sing"
#define VkglTestCase_001945_2 "le_basic_array.std140.row_major_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001945, VkglTestCase_001945_1, VkglTestCase_001945_2);

#define VkglTestCase_001946_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001946_2 "e_basic_array.std140.column_major_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001946, VkglTestCase_001946_1, VkglTestCase_001946_2);

#define VkglTestCase_001947_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001947_2 ".single_basic_array.std140.mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001947, VkglTestCase_001947_1, VkglTestCase_001947_2);

#define VkglTestCase_001948_1 "KHR-GLES3.shaders.uniform_block.sing"
#define VkglTestCase_001948_2 "le_basic_array.std140.row_major_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001948, VkglTestCase_001948_1, VkglTestCase_001948_2);

#define VkglTestCase_001949_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001949_2 "e_basic_array.std140.column_major_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001949, VkglTestCase_001949_1, VkglTestCase_001949_2);

#define VkglTestCase_001950_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001950_2 "single_basic_array.std140.mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001950, VkglTestCase_001950_1, VkglTestCase_001950_2);

#define VkglTestCase_001951_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001951_2 "e_basic_array.std140.row_major_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001951, VkglTestCase_001951_1, VkglTestCase_001951_2);

#define VkglTestCase_001952_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001952_2 "_basic_array.std140.column_major_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001952, VkglTestCase_001952_1, VkglTestCase_001952_2);

#define VkglTestCase_001953_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001953_2 "single_basic_array.std140.mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001953, VkglTestCase_001953_1, VkglTestCase_001953_2);

#define VkglTestCase_001954_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001954_2 "e_basic_array.std140.row_major_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001954, VkglTestCase_001954_1, VkglTestCase_001954_2);

#define VkglTestCase_001955_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001955_2 "_basic_array.std140.column_major_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001955, VkglTestCase_001955_1, VkglTestCase_001955_2);

#define VkglTestCase_001956_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001956_2 "single_basic_array.std140.mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001956, VkglTestCase_001956_1, VkglTestCase_001956_2);

#define VkglTestCase_001957_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001957_2 "e_basic_array.std140.row_major_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001957, VkglTestCase_001957_1, VkglTestCase_001957_2);

#define VkglTestCase_001958_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001958_2 "_basic_array.std140.column_major_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001958, VkglTestCase_001958_1, VkglTestCase_001958_2);

#define VkglTestCase_001959_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001959_2 "single_basic_array.std140.mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001959, VkglTestCase_001959_1, VkglTestCase_001959_2);

#define VkglTestCase_001960_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001960_2 "e_basic_array.std140.row_major_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001960, VkglTestCase_001960_1, VkglTestCase_001960_2);

#define VkglTestCase_001961_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001961_2 "_basic_array.std140.column_major_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001961, VkglTestCase_001961_1, VkglTestCase_001961_2);

#define VkglTestCase_001962_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001962_2 "single_basic_array.std140.mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001962, VkglTestCase_001962_1, VkglTestCase_001962_2);

#define VkglTestCase_001963_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001963_2 "e_basic_array.std140.row_major_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001963, VkglTestCase_001963_1, VkglTestCase_001963_2);

#define VkglTestCase_001964_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001964_2 "_basic_array.std140.column_major_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001964, VkglTestCase_001964_1, VkglTestCase_001964_2);

#define VkglTestCase_001965_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001965_2 "single_basic_array.std140.mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001965, VkglTestCase_001965_1, VkglTestCase_001965_2);

#define VkglTestCase_001966_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001966_2 "e_basic_array.std140.row_major_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001966, VkglTestCase_001966_1, VkglTestCase_001966_2);

#define VkglTestCase_001967_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001967_2 "_basic_array.std140.column_major_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001967, VkglTestCase_001967_1, VkglTestCase_001967_2);
