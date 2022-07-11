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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013872_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013872_2 "x.add.uniform.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013872, VkglTestCase_013872_1, VkglTestCase_013872_2);

#define VkglTestCase_013873_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013873_2 ".add.uniform.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013873, VkglTestCase_013873_1, VkglTestCase_013873_2);

#define VkglTestCase_013874_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013874_2 "x.add.uniform.lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013874, VkglTestCase_013874_1, VkglTestCase_013874_2);

#define VkglTestCase_013875_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013875_2 ".add.uniform.lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013875, VkglTestCase_013875_1, VkglTestCase_013875_2);

#define VkglTestCase_013876_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013876_2 "add.uniform.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013876, VkglTestCase_013876_1, VkglTestCase_013876_2);

#define VkglTestCase_013877_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013877_2 "dd.uniform.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013877, VkglTestCase_013877_1, VkglTestCase_013877_2);

#define VkglTestCase_013878_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013878_2 ".add.uniform.mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013878, VkglTestCase_013878_1, VkglTestCase_013878_2);

#define VkglTestCase_013879_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013879_2 "add.uniform.mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013879, VkglTestCase_013879_1, VkglTestCase_013879_2);

#define VkglTestCase_013880_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013880_2 ".add.uniform.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013880, VkglTestCase_013880_1, VkglTestCase_013880_2);

#define VkglTestCase_013881_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013881_2 "add.uniform.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013881, VkglTestCase_013881_1, VkglTestCase_013881_2);

#define VkglTestCase_013882_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013882_2 "x.add.uniform.highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013882, VkglTestCase_013882_1, VkglTestCase_013882_2);

#define VkglTestCase_013883_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013883_2 ".add.uniform.highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013883, VkglTestCase_013883_1, VkglTestCase_013883_2);

#define VkglTestCase_013884_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013884_2 ".add.uniform.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013884, VkglTestCase_013884_1, VkglTestCase_013884_2);

#define VkglTestCase_013885_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013885_2 "add.uniform.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013885, VkglTestCase_013885_1, VkglTestCase_013885_2);

#define VkglTestCase_013886_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013886_2 "add.uniform.lowp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013886, VkglTestCase_013886_1, VkglTestCase_013886_2);

#define VkglTestCase_013887_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013887_2 "dd.uniform.lowp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013887, VkglTestCase_013887_1, VkglTestCase_013887_2);

#define VkglTestCase_013888_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013888_2 "dd.uniform.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013888, VkglTestCase_013888_1, VkglTestCase_013888_2);

#define VkglTestCase_013889_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013889_2 "d.uniform.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013889, VkglTestCase_013889_1, VkglTestCase_013889_2);

#define VkglTestCase_013890_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013890_2 "dd.uniform.mediump_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013890, VkglTestCase_013890_1, VkglTestCase_013890_2);

#define VkglTestCase_013891_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013891_2 "d.uniform.mediump_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013891, VkglTestCase_013891_1, VkglTestCase_013891_2);

#define VkglTestCase_013892_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013892_2 "add.uniform.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013892, VkglTestCase_013892_1, VkglTestCase_013892_2);

#define VkglTestCase_013893_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013893_2 "dd.uniform.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013893, VkglTestCase_013893_1, VkglTestCase_013893_2);

#define VkglTestCase_013894_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013894_2 "add.uniform.highp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013894, VkglTestCase_013894_1, VkglTestCase_013894_2);

#define VkglTestCase_013895_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013895_2 "dd.uniform.highp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013895, VkglTestCase_013895_1, VkglTestCase_013895_2);

#define VkglTestCase_013896_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013896_2 ".add.uniform.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013896, VkglTestCase_013896_1, VkglTestCase_013896_2);

#define VkglTestCase_013897_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013897_2 "add.uniform.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013897, VkglTestCase_013897_1, VkglTestCase_013897_2);

#define VkglTestCase_013898_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013898_2 "add.uniform.lowp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013898, VkglTestCase_013898_1, VkglTestCase_013898_2);

#define VkglTestCase_013899_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013899_2 "dd.uniform.lowp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013899, VkglTestCase_013899_1, VkglTestCase_013899_2);

#define VkglTestCase_013900_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013900_2 "dd.uniform.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013900, VkglTestCase_013900_1, VkglTestCase_013900_2);

#define VkglTestCase_013901_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013901_2 "d.uniform.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013901, VkglTestCase_013901_1, VkglTestCase_013901_2);

#define VkglTestCase_013902_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013902_2 "dd.uniform.mediump_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013902, VkglTestCase_013902_1, VkglTestCase_013902_2);

#define VkglTestCase_013903_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013903_2 "d.uniform.mediump_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013903, VkglTestCase_013903_1, VkglTestCase_013903_2);

#define VkglTestCase_013904_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013904_2 "add.uniform.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013904, VkglTestCase_013904_1, VkglTestCase_013904_2);

#define VkglTestCase_013905_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013905_2 "dd.uniform.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013905, VkglTestCase_013905_1, VkglTestCase_013905_2);

#define VkglTestCase_013906_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013906_2 "add.uniform.highp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013906, VkglTestCase_013906_1, VkglTestCase_013906_2);

#define VkglTestCase_013907_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013907_2 "dd.uniform.highp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013907, VkglTestCase_013907_1, VkglTestCase_013907_2);

#define VkglTestCase_013908_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013908_2 ".add.uniform.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013908, VkglTestCase_013908_1, VkglTestCase_013908_2);

#define VkglTestCase_013909_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013909_2 "add.uniform.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013909, VkglTestCase_013909_1, VkglTestCase_013909_2);

#define VkglTestCase_013910_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013910_2 "add.uniform.lowp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013910, VkglTestCase_013910_1, VkglTestCase_013910_2);

#define VkglTestCase_013911_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013911_2 "dd.uniform.lowp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013911, VkglTestCase_013911_1, VkglTestCase_013911_2);

#define VkglTestCase_013912_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013912_2 "dd.uniform.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013912, VkglTestCase_013912_1, VkglTestCase_013912_2);

#define VkglTestCase_013913_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013913_2 "d.uniform.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013913, VkglTestCase_013913_1, VkglTestCase_013913_2);

#define VkglTestCase_013914_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013914_2 "dd.uniform.mediump_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013914, VkglTestCase_013914_1, VkglTestCase_013914_2);

#define VkglTestCase_013915_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013915_2 "d.uniform.mediump_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013915, VkglTestCase_013915_1, VkglTestCase_013915_2);

#define VkglTestCase_013916_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013916_2 "add.uniform.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013916, VkglTestCase_013916_1, VkglTestCase_013916_2);

#define VkglTestCase_013917_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013917_2 "dd.uniform.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013917, VkglTestCase_013917_1, VkglTestCase_013917_2);

#define VkglTestCase_013918_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013918_2 "add.uniform.highp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013918, VkglTestCase_013918_1, VkglTestCase_013918_2);

#define VkglTestCase_013919_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013919_2 "dd.uniform.highp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013919, VkglTestCase_013919_1, VkglTestCase_013919_2);

#define VkglTestCase_013920_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013920_2 "x.add.uniform.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013920, VkglTestCase_013920_1, VkglTestCase_013920_2);

#define VkglTestCase_013921_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013921_2 ".add.uniform.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013921, VkglTestCase_013921_1, VkglTestCase_013921_2);

#define VkglTestCase_013922_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013922_2 "x.add.uniform.lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013922, VkglTestCase_013922_1, VkglTestCase_013922_2);

#define VkglTestCase_013923_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013923_2 ".add.uniform.lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013923, VkglTestCase_013923_1, VkglTestCase_013923_2);

#define VkglTestCase_013924_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013924_2 "add.uniform.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013924, VkglTestCase_013924_1, VkglTestCase_013924_2);

#define VkglTestCase_013925_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013925_2 "dd.uniform.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013925, VkglTestCase_013925_1, VkglTestCase_013925_2);

#define VkglTestCase_013926_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013926_2 ".add.uniform.mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013926, VkglTestCase_013926_1, VkglTestCase_013926_2);

#define VkglTestCase_013927_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013927_2 "add.uniform.mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013927, VkglTestCase_013927_1, VkglTestCase_013927_2);

#define VkglTestCase_013928_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013928_2 ".add.uniform.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013928, VkglTestCase_013928_1, VkglTestCase_013928_2);

#define VkglTestCase_013929_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013929_2 "add.uniform.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013929, VkglTestCase_013929_1, VkglTestCase_013929_2);

#define VkglTestCase_013930_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013930_2 "x.add.uniform.highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013930, VkglTestCase_013930_1, VkglTestCase_013930_2);

#define VkglTestCase_013931_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013931_2 ".add.uniform.highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013931, VkglTestCase_013931_1, VkglTestCase_013931_2);

#define VkglTestCase_013932_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013932_2 ".add.uniform.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013932, VkglTestCase_013932_1, VkglTestCase_013932_2);

#define VkglTestCase_013933_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013933_2 "add.uniform.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013933, VkglTestCase_013933_1, VkglTestCase_013933_2);

#define VkglTestCase_013934_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013934_2 "add.uniform.lowp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013934, VkglTestCase_013934_1, VkglTestCase_013934_2);

#define VkglTestCase_013935_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013935_2 "dd.uniform.lowp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013935, VkglTestCase_013935_1, VkglTestCase_013935_2);

#define VkglTestCase_013936_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013936_2 "dd.uniform.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013936, VkglTestCase_013936_1, VkglTestCase_013936_2);

#define VkglTestCase_013937_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013937_2 "d.uniform.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013937, VkglTestCase_013937_1, VkglTestCase_013937_2);

#define VkglTestCase_013938_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013938_2 "dd.uniform.mediump_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013938, VkglTestCase_013938_1, VkglTestCase_013938_2);

#define VkglTestCase_013939_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013939_2 "d.uniform.mediump_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013939, VkglTestCase_013939_1, VkglTestCase_013939_2);

#define VkglTestCase_013940_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013940_2 "add.uniform.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013940, VkglTestCase_013940_1, VkglTestCase_013940_2);

#define VkglTestCase_013941_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013941_2 "dd.uniform.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013941, VkglTestCase_013941_1, VkglTestCase_013941_2);

#define VkglTestCase_013942_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013942_2 "add.uniform.highp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013942, VkglTestCase_013942_1, VkglTestCase_013942_2);

#define VkglTestCase_013943_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013943_2 "dd.uniform.highp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013943, VkglTestCase_013943_1, VkglTestCase_013943_2);

#define VkglTestCase_013944_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013944_2 ".add.uniform.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013944, VkglTestCase_013944_1, VkglTestCase_013944_2);

#define VkglTestCase_013945_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013945_2 "add.uniform.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013945, VkglTestCase_013945_1, VkglTestCase_013945_2);

#define VkglTestCase_013946_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013946_2 "add.uniform.lowp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013946, VkglTestCase_013946_1, VkglTestCase_013946_2);

#define VkglTestCase_013947_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013947_2 "dd.uniform.lowp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013947, VkglTestCase_013947_1, VkglTestCase_013947_2);

#define VkglTestCase_013948_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013948_2 "dd.uniform.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013948, VkglTestCase_013948_1, VkglTestCase_013948_2);

#define VkglTestCase_013949_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013949_2 "d.uniform.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013949, VkglTestCase_013949_1, VkglTestCase_013949_2);

#define VkglTestCase_013950_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013950_2 "dd.uniform.mediump_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013950, VkglTestCase_013950_1, VkglTestCase_013950_2);

#define VkglTestCase_013951_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013951_2 "d.uniform.mediump_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013951, VkglTestCase_013951_1, VkglTestCase_013951_2);

#define VkglTestCase_013952_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013952_2 "add.uniform.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013952, VkglTestCase_013952_1, VkglTestCase_013952_2);

#define VkglTestCase_013953_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013953_2 "dd.uniform.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013953, VkglTestCase_013953_1, VkglTestCase_013953_2);

#define VkglTestCase_013954_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013954_2 "add.uniform.highp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013954, VkglTestCase_013954_1, VkglTestCase_013954_2);

#define VkglTestCase_013955_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013955_2 "dd.uniform.highp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013955, VkglTestCase_013955_1, VkglTestCase_013955_2);

#define VkglTestCase_013956_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013956_2 ".add.uniform.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013956, VkglTestCase_013956_1, VkglTestCase_013956_2);

#define VkglTestCase_013957_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013957_2 "add.uniform.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013957, VkglTestCase_013957_1, VkglTestCase_013957_2);

#define VkglTestCase_013958_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013958_2 "add.uniform.lowp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013958, VkglTestCase_013958_1, VkglTestCase_013958_2);

#define VkglTestCase_013959_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013959_2 "dd.uniform.lowp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013959, VkglTestCase_013959_1, VkglTestCase_013959_2);

#define VkglTestCase_013960_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013960_2 "dd.uniform.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013960, VkglTestCase_013960_1, VkglTestCase_013960_2);

#define VkglTestCase_013961_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013961_2 "d.uniform.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013961, VkglTestCase_013961_1, VkglTestCase_013961_2);

#define VkglTestCase_013962_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013962_2 "dd.uniform.mediump_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013962, VkglTestCase_013962_1, VkglTestCase_013962_2);

#define VkglTestCase_013963_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013963_2 "d.uniform.mediump_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013963, VkglTestCase_013963_1, VkglTestCase_013963_2);

#define VkglTestCase_013964_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013964_2 "add.uniform.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013964, VkglTestCase_013964_1, VkglTestCase_013964_2);

#define VkglTestCase_013965_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013965_2 "dd.uniform.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013965, VkglTestCase_013965_1, VkglTestCase_013965_2);

#define VkglTestCase_013966_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013966_2 "add.uniform.highp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013966, VkglTestCase_013966_1, VkglTestCase_013966_2);

#define VkglTestCase_013967_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013967_2 "dd.uniform.highp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013967, VkglTestCase_013967_1, VkglTestCase_013967_2);

#define VkglTestCase_013968_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013968_2 "x.add.uniform.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013968, VkglTestCase_013968_1, VkglTestCase_013968_2);

#define VkglTestCase_013969_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013969_2 ".add.uniform.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013969, VkglTestCase_013969_1, VkglTestCase_013969_2);

#define VkglTestCase_013970_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013970_2 "x.add.uniform.lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013970, VkglTestCase_013970_1, VkglTestCase_013970_2);

#define VkglTestCase_013971_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013971_2 ".add.uniform.lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013971, VkglTestCase_013971_1, VkglTestCase_013971_2);

#define VkglTestCase_013972_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013972_2 "add.uniform.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013972, VkglTestCase_013972_1, VkglTestCase_013972_2);

#define VkglTestCase_013973_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013973_2 "dd.uniform.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013973, VkglTestCase_013973_1, VkglTestCase_013973_2);

#define VkglTestCase_013974_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013974_2 ".add.uniform.mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013974, VkglTestCase_013974_1, VkglTestCase_013974_2);

#define VkglTestCase_013975_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013975_2 "add.uniform.mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013975, VkglTestCase_013975_1, VkglTestCase_013975_2);

#define VkglTestCase_013976_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013976_2 ".add.uniform.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013976, VkglTestCase_013976_1, VkglTestCase_013976_2);

#define VkglTestCase_013977_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013977_2 "add.uniform.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013977, VkglTestCase_013977_1, VkglTestCase_013977_2);

#define VkglTestCase_013978_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013978_2 "x.add.uniform.highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013978, VkglTestCase_013978_1, VkglTestCase_013978_2);

#define VkglTestCase_013979_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013979_2 ".add.uniform.highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013979, VkglTestCase_013979_1, VkglTestCase_013979_2);
