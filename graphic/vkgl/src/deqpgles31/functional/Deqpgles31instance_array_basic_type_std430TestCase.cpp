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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009889_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009889_2 "nstance_array_basic_type.std430.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009889, VkglTestCase_009889_1, VkglTestCase_009889_2);

#define VkglTestCase_009890_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009890_2 "nstance_array_basic_type.std430.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009890, VkglTestCase_009890_1, VkglTestCase_009890_2);

#define VkglTestCase_009891_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009891_2 "nstance_array_basic_type.std430.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009891, VkglTestCase_009891_1, VkglTestCase_009891_2);

#define VkglTestCase_009892_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009892_2 "nstance_array_basic_type.std430.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009892, VkglTestCase_009892_1, VkglTestCase_009892_2);

#define VkglTestCase_009893_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009893_2 "instance_array_basic_type.std430.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009893, VkglTestCase_009893_1, VkglTestCase_009893_2);

#define VkglTestCase_009894_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009894_2 "nstance_array_basic_type.std430.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009894, VkglTestCase_009894_1, VkglTestCase_009894_2);

#define VkglTestCase_009895_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009895_2 "nstance_array_basic_type.std430.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009895, VkglTestCase_009895_1, VkglTestCase_009895_2);

#define VkglTestCase_009896_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009896_2 "nstance_array_basic_type.std430.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009896, VkglTestCase_009896_1, VkglTestCase_009896_2);

#define VkglTestCase_009897_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009897_2 "nstance_array_basic_type.std430.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009897, VkglTestCase_009897_1, VkglTestCase_009897_2);

#define VkglTestCase_009898_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009898_2 "nstance_array_basic_type.std430.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009898, VkglTestCase_009898_1, VkglTestCase_009898_2);

#define VkglTestCase_009899_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009899_2 "nstance_array_basic_type.std430.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009899, VkglTestCase_009899_1, VkglTestCase_009899_2);

#define VkglTestCase_009900_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009900_2 "nstance_array_basic_type.std430.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009900, VkglTestCase_009900_1, VkglTestCase_009900_2);

#define VkglTestCase_009901_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009901_2 "nstance_array_basic_type.std430.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009901, VkglTestCase_009901_1, VkglTestCase_009901_2);

#define VkglTestCase_009902_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009902_2 "nstance_array_basic_type.std430.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009902, VkglTestCase_009902_1, VkglTestCase_009902_2);

#define VkglTestCase_009903_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009903_2 "nstance_array_basic_type.std430.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009903, VkglTestCase_009903_1, VkglTestCase_009903_2);

#define VkglTestCase_009904_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009904_2 "nstance_array_basic_type.std430.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009904, VkglTestCase_009904_1, VkglTestCase_009904_2);

#define VkglTestCase_009905_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009905_2 "nstance_array_basic_type.std430.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009905, VkglTestCase_009905_1, VkglTestCase_009905_2);

#define VkglTestCase_009906_1 "dEQP-GLES31.functional.ssbo.layout.instan"
#define VkglTestCase_009906_2 "ce_array_basic_type.std430.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009906, VkglTestCase_009906_1, VkglTestCase_009906_2);

#define VkglTestCase_009907_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009907_2 "e_array_basic_type.std430.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009907, VkglTestCase_009907_1, VkglTestCase_009907_2);

#define VkglTestCase_009908_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009908_2 "nstance_array_basic_type.std430.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009908, VkglTestCase_009908_1, VkglTestCase_009908_2);

#define VkglTestCase_009909_1 "dEQP-GLES31.functional.ssbo.layout.instan"
#define VkglTestCase_009909_2 "ce_array_basic_type.std430.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009909, VkglTestCase_009909_1, VkglTestCase_009909_2);

#define VkglTestCase_009910_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009910_2 "e_array_basic_type.std430.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009910, VkglTestCase_009910_1, VkglTestCase_009910_2);

#define VkglTestCase_009911_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009911_2 "nstance_array_basic_type.std430.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009911, VkglTestCase_009911_1, VkglTestCase_009911_2);

#define VkglTestCase_009912_1 "dEQP-GLES31.functional.ssbo.layout.instan"
#define VkglTestCase_009912_2 "ce_array_basic_type.std430.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009912, VkglTestCase_009912_1, VkglTestCase_009912_2);

#define VkglTestCase_009913_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009913_2 "e_array_basic_type.std430.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009913, VkglTestCase_009913_1, VkglTestCase_009913_2);

#define VkglTestCase_009914_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009914_2 "stance_array_basic_type.std430.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009914, VkglTestCase_009914_1, VkglTestCase_009914_2);

#define VkglTestCase_009915_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009915_2 "e_array_basic_type.std430.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009915, VkglTestCase_009915_1, VkglTestCase_009915_2);

#define VkglTestCase_009916_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009916_2 "_array_basic_type.std430.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009916, VkglTestCase_009916_1, VkglTestCase_009916_2);

#define VkglTestCase_009917_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009917_2 "stance_array_basic_type.std430.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009917, VkglTestCase_009917_1, VkglTestCase_009917_2);

#define VkglTestCase_009918_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009918_2 "e_array_basic_type.std430.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009918, VkglTestCase_009918_1, VkglTestCase_009918_2);

#define VkglTestCase_009919_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009919_2 "_array_basic_type.std430.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009919, VkglTestCase_009919_1, VkglTestCase_009919_2);

#define VkglTestCase_009920_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009920_2 "stance_array_basic_type.std430.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009920, VkglTestCase_009920_1, VkglTestCase_009920_2);

#define VkglTestCase_009921_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009921_2 "e_array_basic_type.std430.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009921, VkglTestCase_009921_1, VkglTestCase_009921_2);

#define VkglTestCase_009922_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009922_2 "_array_basic_type.std430.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009922, VkglTestCase_009922_1, VkglTestCase_009922_2);

#define VkglTestCase_009923_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009923_2 "stance_array_basic_type.std430.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009923, VkglTestCase_009923_1, VkglTestCase_009923_2);

#define VkglTestCase_009924_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009924_2 "e_array_basic_type.std430.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009924, VkglTestCase_009924_1, VkglTestCase_009924_2);

#define VkglTestCase_009925_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009925_2 "_array_basic_type.std430.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009925, VkglTestCase_009925_1, VkglTestCase_009925_2);

#define VkglTestCase_009926_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009926_2 "stance_array_basic_type.std430.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009926, VkglTestCase_009926_1, VkglTestCase_009926_2);

#define VkglTestCase_009927_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009927_2 "e_array_basic_type.std430.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009927, VkglTestCase_009927_1, VkglTestCase_009927_2);

#define VkglTestCase_009928_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009928_2 "_array_basic_type.std430.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009928, VkglTestCase_009928_1, VkglTestCase_009928_2);

#define VkglTestCase_009929_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009929_2 "stance_array_basic_type.std430.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009929, VkglTestCase_009929_1, VkglTestCase_009929_2);

#define VkglTestCase_009930_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009930_2 "e_array_basic_type.std430.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009930, VkglTestCase_009930_1, VkglTestCase_009930_2);

#define VkglTestCase_009931_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009931_2 "_array_basic_type.std430.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009931, VkglTestCase_009931_1, VkglTestCase_009931_2);
