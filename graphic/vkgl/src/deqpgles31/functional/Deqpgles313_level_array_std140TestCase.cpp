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

#define VkglTestCase_009418_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009418_2 "yout.3_level_array.std140.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009418, VkglTestCase_009418_1, VkglTestCase_009418_2);

#define VkglTestCase_009419_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009419_2 "yout.3_level_array.std140.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009419, VkglTestCase_009419_1, VkglTestCase_009419_2);

#define VkglTestCase_009420_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009420_2 "yout.3_level_array.std140.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009420, VkglTestCase_009420_1, VkglTestCase_009420_2);

#define VkglTestCase_009421_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009421_2 "yout.3_level_array.std140.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009421, VkglTestCase_009421_1, VkglTestCase_009421_2);

#define VkglTestCase_009422_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_009422_2 "ayout.3_level_array.std140.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009422, VkglTestCase_009422_1, VkglTestCase_009422_2);

#define VkglTestCase_009423_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009423_2 "yout.3_level_array.std140.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009423, VkglTestCase_009423_1, VkglTestCase_009423_2);

#define VkglTestCase_009424_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009424_2 "yout.3_level_array.std140.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009424, VkglTestCase_009424_1, VkglTestCase_009424_2);

#define VkglTestCase_009425_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009425_2 "yout.3_level_array.std140.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009425, VkglTestCase_009425_1, VkglTestCase_009425_2);

#define VkglTestCase_009426_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009426_2 "yout.3_level_array.std140.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009426, VkglTestCase_009426_1, VkglTestCase_009426_2);

#define VkglTestCase_009427_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009427_2 "yout.3_level_array.std140.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009427, VkglTestCase_009427_1, VkglTestCase_009427_2);

#define VkglTestCase_009428_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009428_2 "yout.3_level_array.std140.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009428, VkglTestCase_009428_1, VkglTestCase_009428_2);

#define VkglTestCase_009429_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009429_2 "yout.3_level_array.std140.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009429, VkglTestCase_009429_1, VkglTestCase_009429_2);

#define VkglTestCase_009430_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009430_2 "yout.3_level_array.std140.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009430, VkglTestCase_009430_1, VkglTestCase_009430_2);

#define VkglTestCase_009431_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009431_2 "yout.3_level_array.std140.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009431, VkglTestCase_009431_1, VkglTestCase_009431_2);

#define VkglTestCase_009432_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009432_2 "yout.3_level_array.std140.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009432, VkglTestCase_009432_1, VkglTestCase_009432_2);

#define VkglTestCase_009433_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009433_2 "yout.3_level_array.std140.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009433, VkglTestCase_009433_1, VkglTestCase_009433_2);

#define VkglTestCase_009434_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009434_2 "yout.3_level_array.std140.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009434, VkglTestCase_009434_1, VkglTestCase_009434_2);

#define VkglTestCase_009435_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009435_2 "3_level_array.std140.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009435, VkglTestCase_009435_1, VkglTestCase_009435_2);

#define VkglTestCase_009436_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009436_2 "_level_array.std140.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009436, VkglTestCase_009436_1, VkglTestCase_009436_2);

#define VkglTestCase_009437_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009437_2 "yout.3_level_array.std140.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009437, VkglTestCase_009437_1, VkglTestCase_009437_2);

#define VkglTestCase_009438_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009438_2 "3_level_array.std140.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009438, VkglTestCase_009438_1, VkglTestCase_009438_2);

#define VkglTestCase_009439_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009439_2 "_level_array.std140.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009439, VkglTestCase_009439_1, VkglTestCase_009439_2);

#define VkglTestCase_009440_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009440_2 "yout.3_level_array.std140.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009440, VkglTestCase_009440_1, VkglTestCase_009440_2);

#define VkglTestCase_009441_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009441_2 "3_level_array.std140.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009441, VkglTestCase_009441_1, VkglTestCase_009441_2);

#define VkglTestCase_009442_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009442_2 "_level_array.std140.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009442, VkglTestCase_009442_1, VkglTestCase_009442_2);

#define VkglTestCase_009443_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009443_2 "out.3_level_array.std140.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009443, VkglTestCase_009443_1, VkglTestCase_009443_2);

#define VkglTestCase_009444_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009444_2 "_level_array.std140.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009444, VkglTestCase_009444_1, VkglTestCase_009444_2);

#define VkglTestCase_009445_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009445_2 "level_array.std140.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009445, VkglTestCase_009445_1, VkglTestCase_009445_2);

#define VkglTestCase_009446_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009446_2 "out.3_level_array.std140.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009446, VkglTestCase_009446_1, VkglTestCase_009446_2);

#define VkglTestCase_009447_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009447_2 "_level_array.std140.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009447, VkglTestCase_009447_1, VkglTestCase_009447_2);

#define VkglTestCase_009448_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009448_2 "level_array.std140.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009448, VkglTestCase_009448_1, VkglTestCase_009448_2);

#define VkglTestCase_009449_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009449_2 "out.3_level_array.std140.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009449, VkglTestCase_009449_1, VkglTestCase_009449_2);

#define VkglTestCase_009450_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009450_2 "_level_array.std140.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009450, VkglTestCase_009450_1, VkglTestCase_009450_2);

#define VkglTestCase_009451_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009451_2 "level_array.std140.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009451, VkglTestCase_009451_1, VkglTestCase_009451_2);

#define VkglTestCase_009452_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009452_2 "out.3_level_array.std140.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009452, VkglTestCase_009452_1, VkglTestCase_009452_2);

#define VkglTestCase_009453_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009453_2 "_level_array.std140.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009453, VkglTestCase_009453_1, VkglTestCase_009453_2);

#define VkglTestCase_009454_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009454_2 "level_array.std140.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009454, VkglTestCase_009454_1, VkglTestCase_009454_2);

#define VkglTestCase_009455_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009455_2 "out.3_level_array.std140.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009455, VkglTestCase_009455_1, VkglTestCase_009455_2);

#define VkglTestCase_009456_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009456_2 "_level_array.std140.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009456, VkglTestCase_009456_1, VkglTestCase_009456_2);

#define VkglTestCase_009457_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009457_2 "level_array.std140.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009457, VkglTestCase_009457_1, VkglTestCase_009457_2);

#define VkglTestCase_009458_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009458_2 "out.3_level_array.std140.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009458, VkglTestCase_009458_1, VkglTestCase_009458_2);

#define VkglTestCase_009459_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009459_2 "_level_array.std140.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009459, VkglTestCase_009459_1, VkglTestCase_009459_2);

#define VkglTestCase_009460_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009460_2 "level_array.std140.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009460, VkglTestCase_009460_1, VkglTestCase_009460_2);

#define VkglTestCase_010952_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010952_2 "evel_array.std140.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010952, VkglTestCase_010952_1, VkglTestCase_010952_2);

#define VkglTestCase_010953_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010953_2 "vel_array.std140.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010953, VkglTestCase_010953_1, VkglTestCase_010953_2);

#define VkglTestCase_010954_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010954_2 "level_array.std140.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010954, VkglTestCase_010954_1, VkglTestCase_010954_2);

#define VkglTestCase_010955_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010955_2 "level_array.std140.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010955, VkglTestCase_010955_1, VkglTestCase_010955_2);

#define VkglTestCase_010956_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010956_2 "evel_array.std140.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010956, VkglTestCase_010956_1, VkglTestCase_010956_2);

#define VkglTestCase_010957_1 "dEQP-GLES31.functional.ubo.3"
#define VkglTestCase_010957_2 "_level_array.std140.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010957, VkglTestCase_010957_1, VkglTestCase_010957_2);

#define VkglTestCase_010958_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010958_2 "level_array.std140.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010958, VkglTestCase_010958_1, VkglTestCase_010958_2);

#define VkglTestCase_010959_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010959_2 "evel_array.std140.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010959, VkglTestCase_010959_1, VkglTestCase_010959_2);

#define VkglTestCase_010960_1 "dEQP-GLES31.functional.ubo.3"
#define VkglTestCase_010960_2 "_level_array.std140.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010960, VkglTestCase_010960_1, VkglTestCase_010960_2);

#define VkglTestCase_010961_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010961_2 "level_array.std140.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010961, VkglTestCase_010961_1, VkglTestCase_010961_2);

#define VkglTestCase_010962_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010962_2 "evel_array.std140.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010962, VkglTestCase_010962_1, VkglTestCase_010962_2);

#define VkglTestCase_010963_1 "dEQP-GLES31.functional.ubo.3"
#define VkglTestCase_010963_2 "_level_array.std140.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010963, VkglTestCase_010963_1, VkglTestCase_010963_2);

#define VkglTestCase_010964_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010964_2 "level_array.std140.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010964, VkglTestCase_010964_1, VkglTestCase_010964_2);

#define VkglTestCase_010965_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010965_2 "evel_array.std140.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010965, VkglTestCase_010965_1, VkglTestCase_010965_2);

#define VkglTestCase_010966_1 "dEQP-GLES31.functional.ubo.3"
#define VkglTestCase_010966_2 "_level_array.std140.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010966, VkglTestCase_010966_1, VkglTestCase_010966_2);

#define VkglTestCase_010967_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010967_2 "evel_array.std140.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010967, VkglTestCase_010967_1, VkglTestCase_010967_2);

#define VkglTestCase_010968_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010968_2 "vel_array.std140.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010968, VkglTestCase_010968_1, VkglTestCase_010968_2);

#define VkglTestCase_010969_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010969_2 "level_array.std140.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010969, VkglTestCase_010969_1, VkglTestCase_010969_2);

#define VkglTestCase_010970_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010970_2 "evel_array.std140.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010970, VkglTestCase_010970_1, VkglTestCase_010970_2);

#define VkglTestCase_010971_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010971_2 "vel_array.std140.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010971, VkglTestCase_010971_1, VkglTestCase_010971_2);

#define VkglTestCase_010972_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010972_2 "level_array.std140.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010972, VkglTestCase_010972_1, VkglTestCase_010972_2);

#define VkglTestCase_010973_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010973_2 "evel_array.std140.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010973, VkglTestCase_010973_1, VkglTestCase_010973_2);

#define VkglTestCase_010974_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010974_2 "vel_array.std140.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010974, VkglTestCase_010974_1, VkglTestCase_010974_2);

#define VkglTestCase_010975_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010975_2 "level_array.std140.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010975, VkglTestCase_010975_1, VkglTestCase_010975_2);

#define VkglTestCase_010976_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010976_2 "level_array.std140.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010976, VkglTestCase_010976_1, VkglTestCase_010976_2);

#define VkglTestCase_010977_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010977_2 "evel_array.std140.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010977, VkglTestCase_010977_1, VkglTestCase_010977_2);

#define VkglTestCase_010978_1 "dEQP-GLES31.functional.ubo.3"
#define VkglTestCase_010978_2 "_level_array.std140.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010978, VkglTestCase_010978_1, VkglTestCase_010978_2);

#define VkglTestCase_010979_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010979_2 "evel_array.std140.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010979, VkglTestCase_010979_1, VkglTestCase_010979_2);

#define VkglTestCase_010980_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010980_2 "vel_array.std140.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010980, VkglTestCase_010980_1, VkglTestCase_010980_2);

#define VkglTestCase_010981_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010981_2 "level_array.std140.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010981, VkglTestCase_010981_1, VkglTestCase_010981_2);

#define VkglTestCase_010982_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010982_2 "evel_array.std140.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010982, VkglTestCase_010982_1, VkglTestCase_010982_2);

#define VkglTestCase_010983_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010983_2 "vel_array.std140.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010983, VkglTestCase_010983_1, VkglTestCase_010983_2);

#define VkglTestCase_010984_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010984_2 "level_array.std140.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010984, VkglTestCase_010984_1, VkglTestCase_010984_2);

#define VkglTestCase_010985_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010985_2 "evel_array.std140.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010985, VkglTestCase_010985_1, VkglTestCase_010985_2);

#define VkglTestCase_010986_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010986_2 "vel_array.std140.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010986, VkglTestCase_010986_1, VkglTestCase_010986_2);

#define VkglTestCase_010987_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010987_2 "level_array.std140.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010987, VkglTestCase_010987_1, VkglTestCase_010987_2);

#define VkglTestCase_010988_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010988_2 "level_array.std140.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010988, VkglTestCase_010988_1, VkglTestCase_010988_2);

#define VkglTestCase_010989_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010989_2 "evel_array.std140.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010989, VkglTestCase_010989_1, VkglTestCase_010989_2);

#define VkglTestCase_010990_1 "dEQP-GLES31.functional.ubo.3"
#define VkglTestCase_010990_2 "_level_array.std140.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010990, VkglTestCase_010990_1, VkglTestCase_010990_2);

#define VkglTestCase_010991_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010991_2 "evel_array.std140.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010991, VkglTestCase_010991_1, VkglTestCase_010991_2);

#define VkglTestCase_010992_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010992_2 "vel_array.std140.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010992, VkglTestCase_010992_1, VkglTestCase_010992_2);

#define VkglTestCase_010993_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010993_2 "level_array.std140.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010993, VkglTestCase_010993_1, VkglTestCase_010993_2);

#define VkglTestCase_010994_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010994_2 "evel_array.std140.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010994, VkglTestCase_010994_1, VkglTestCase_010994_2);

#define VkglTestCase_010995_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010995_2 "vel_array.std140.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010995, VkglTestCase_010995_1, VkglTestCase_010995_2);

#define VkglTestCase_010996_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010996_2 "level_array.std140.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010996, VkglTestCase_010996_1, VkglTestCase_010996_2);

#define VkglTestCase_010997_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010997_2 "evel_array.std140.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010997, VkglTestCase_010997_1, VkglTestCase_010997_2);

#define VkglTestCase_010998_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010998_2 "vel_array.std140.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010998, VkglTestCase_010998_1, VkglTestCase_010998_2);

#define VkglTestCase_010999_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010999_2 "level_array.std140.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010999, VkglTestCase_010999_1, VkglTestCase_010999_2);

#define VkglTestCase_011000_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_011000_2 "level_array.std140.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011000, VkglTestCase_011000_1, VkglTestCase_011000_2);

#define VkglTestCase_011001_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_011001_2 "evel_array.std140.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011001, VkglTestCase_011001_1, VkglTestCase_011001_2);

#define VkglTestCase_011002_1 "dEQP-GLES31.functional.ubo.3"
#define VkglTestCase_011002_2 "_level_array.std140.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011002, VkglTestCase_011002_1, VkglTestCase_011002_2);

#define VkglTestCase_011003_1 "dEQP-GLES31.functional.ubo.3_level"
#define VkglTestCase_011003_2 "_array.std140.row_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011003, VkglTestCase_011003_1, VkglTestCase_011003_2);

#define VkglTestCase_011004_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_011004_2 "array.std140.row_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011004, VkglTestCase_011004_1, VkglTestCase_011004_2);

#define VkglTestCase_011005_1 "dEQP-GLES31.functional.ubo.3_leve"
#define VkglTestCase_011005_2 "l_array.std140.row_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011005, VkglTestCase_011005_1, VkglTestCase_011005_2);

#define VkglTestCase_011006_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011006_2 "rray.std140.column_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011006, VkglTestCase_011006_1, VkglTestCase_011006_2);

#define VkglTestCase_011007_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_011007_2 "ray.std140.column_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011007, VkglTestCase_011007_1, VkglTestCase_011007_2);

#define VkglTestCase_011008_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_011008_2 "array.std140.column_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011008, VkglTestCase_011008_1, VkglTestCase_011008_2);

#define VkglTestCase_011009_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_011009_2 "level_array.std140.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011009, VkglTestCase_011009_1, VkglTestCase_011009_2);

#define VkglTestCase_011010_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_011010_2 "evel_array.std140.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011010, VkglTestCase_011010_1, VkglTestCase_011010_2);

#define VkglTestCase_011011_1 "dEQP-GLES31.functional.ubo.3"
#define VkglTestCase_011011_2 "_level_array.std140.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011011, VkglTestCase_011011_1, VkglTestCase_011011_2);

#define VkglTestCase_011012_1 "dEQP-GLES31.functional.ubo.3_level"
#define VkglTestCase_011012_2 "_array.std140.row_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011012, VkglTestCase_011012_1, VkglTestCase_011012_2);

#define VkglTestCase_011013_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_011013_2 "array.std140.row_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011013, VkglTestCase_011013_1, VkglTestCase_011013_2);

#define VkglTestCase_011014_1 "dEQP-GLES31.functional.ubo.3_leve"
#define VkglTestCase_011014_2 "l_array.std140.row_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011014, VkglTestCase_011014_1, VkglTestCase_011014_2);

#define VkglTestCase_011015_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011015_2 "rray.std140.column_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011015, VkglTestCase_011015_1, VkglTestCase_011015_2);

#define VkglTestCase_011016_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_011016_2 "ray.std140.column_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011016, VkglTestCase_011016_1, VkglTestCase_011016_2);

#define VkglTestCase_011017_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_011017_2 "array.std140.column_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011017, VkglTestCase_011017_1, VkglTestCase_011017_2);

#define VkglTestCase_011018_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_011018_2 "level_array.std140.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011018, VkglTestCase_011018_1, VkglTestCase_011018_2);

#define VkglTestCase_011019_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_011019_2 "evel_array.std140.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011019, VkglTestCase_011019_1, VkglTestCase_011019_2);

#define VkglTestCase_011020_1 "dEQP-GLES31.functional.ubo.3"
#define VkglTestCase_011020_2 "_level_array.std140.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011020, VkglTestCase_011020_1, VkglTestCase_011020_2);

#define VkglTestCase_011021_1 "dEQP-GLES31.functional.ubo.3_level"
#define VkglTestCase_011021_2 "_array.std140.row_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011021, VkglTestCase_011021_1, VkglTestCase_011021_2);

#define VkglTestCase_011022_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_011022_2 "array.std140.row_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011022, VkglTestCase_011022_1, VkglTestCase_011022_2);

#define VkglTestCase_011023_1 "dEQP-GLES31.functional.ubo.3_leve"
#define VkglTestCase_011023_2 "l_array.std140.row_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011023, VkglTestCase_011023_1, VkglTestCase_011023_2);

#define VkglTestCase_011024_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011024_2 "rray.std140.column_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011024, VkglTestCase_011024_1, VkglTestCase_011024_2);

#define VkglTestCase_011025_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_011025_2 "ray.std140.column_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011025, VkglTestCase_011025_1, VkglTestCase_011025_2);

#define VkglTestCase_011026_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_011026_2 "array.std140.column_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011026, VkglTestCase_011026_1, VkglTestCase_011026_2);

#define VkglTestCase_011027_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_011027_2 "evel_array.std140.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011027, VkglTestCase_011027_1, VkglTestCase_011027_2);

#define VkglTestCase_011028_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_011028_2 "vel_array.std140.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011028, VkglTestCase_011028_1, VkglTestCase_011028_2);

#define VkglTestCase_011029_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_011029_2 "level_array.std140.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011029, VkglTestCase_011029_1, VkglTestCase_011029_2);

#define VkglTestCase_011030_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_011030_2 "array.std140.row_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011030, VkglTestCase_011030_1, VkglTestCase_011030_2);

#define VkglTestCase_011031_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011031_2 "rray.std140.row_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011031, VkglTestCase_011031_1, VkglTestCase_011031_2);

#define VkglTestCase_011032_1 "dEQP-GLES31.functional.ubo.3_level"
#define VkglTestCase_011032_2 "_array.std140.row_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011032, VkglTestCase_011032_1, VkglTestCase_011032_2);

#define VkglTestCase_011033_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_011033_2 "ray.std140.column_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011033, VkglTestCase_011033_1, VkglTestCase_011033_2);

#define VkglTestCase_011034_1 "dEQP-GLES31.functional.ubo.3_level_arr"
#define VkglTestCase_011034_2 "ay.std140.column_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011034, VkglTestCase_011034_1, VkglTestCase_011034_2);

#define VkglTestCase_011035_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011035_2 "rray.std140.column_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011035, VkglTestCase_011035_1, VkglTestCase_011035_2);

#define VkglTestCase_011036_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_011036_2 "evel_array.std140.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011036, VkglTestCase_011036_1, VkglTestCase_011036_2);

#define VkglTestCase_011037_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_011037_2 "vel_array.std140.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011037, VkglTestCase_011037_1, VkglTestCase_011037_2);

#define VkglTestCase_011038_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_011038_2 "level_array.std140.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011038, VkglTestCase_011038_1, VkglTestCase_011038_2);

#define VkglTestCase_011039_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_011039_2 "array.std140.row_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011039, VkglTestCase_011039_1, VkglTestCase_011039_2);

#define VkglTestCase_011040_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011040_2 "rray.std140.row_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011040, VkglTestCase_011040_1, VkglTestCase_011040_2);

#define VkglTestCase_011041_1 "dEQP-GLES31.functional.ubo.3_level"
#define VkglTestCase_011041_2 "_array.std140.row_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011041, VkglTestCase_011041_1, VkglTestCase_011041_2);

#define VkglTestCase_011042_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_011042_2 "ray.std140.column_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011042, VkglTestCase_011042_1, VkglTestCase_011042_2);

#define VkglTestCase_011043_1 "dEQP-GLES31.functional.ubo.3_level_arr"
#define VkglTestCase_011043_2 "ay.std140.column_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011043, VkglTestCase_011043_1, VkglTestCase_011043_2);

#define VkglTestCase_011044_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011044_2 "rray.std140.column_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011044, VkglTestCase_011044_1, VkglTestCase_011044_2);

#define VkglTestCase_011045_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_011045_2 "evel_array.std140.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011045, VkglTestCase_011045_1, VkglTestCase_011045_2);

#define VkglTestCase_011046_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_011046_2 "vel_array.std140.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011046, VkglTestCase_011046_1, VkglTestCase_011046_2);

#define VkglTestCase_011047_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_011047_2 "level_array.std140.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011047, VkglTestCase_011047_1, VkglTestCase_011047_2);

#define VkglTestCase_011048_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_011048_2 "array.std140.row_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011048, VkglTestCase_011048_1, VkglTestCase_011048_2);

#define VkglTestCase_011049_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011049_2 "rray.std140.row_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011049, VkglTestCase_011049_1, VkglTestCase_011049_2);

#define VkglTestCase_011050_1 "dEQP-GLES31.functional.ubo.3_level"
#define VkglTestCase_011050_2 "_array.std140.row_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011050, VkglTestCase_011050_1, VkglTestCase_011050_2);

#define VkglTestCase_011051_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_011051_2 "ray.std140.column_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011051, VkglTestCase_011051_1, VkglTestCase_011051_2);

#define VkglTestCase_011052_1 "dEQP-GLES31.functional.ubo.3_level_arr"
#define VkglTestCase_011052_2 "ay.std140.column_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011052, VkglTestCase_011052_1, VkglTestCase_011052_2);

#define VkglTestCase_011053_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011053_2 "rray.std140.column_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011053, VkglTestCase_011053_1, VkglTestCase_011053_2);

#define VkglTestCase_011054_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_011054_2 "evel_array.std140.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011054, VkglTestCase_011054_1, VkglTestCase_011054_2);

#define VkglTestCase_011055_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_011055_2 "vel_array.std140.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011055, VkglTestCase_011055_1, VkglTestCase_011055_2);

#define VkglTestCase_011056_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_011056_2 "level_array.std140.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011056, VkglTestCase_011056_1, VkglTestCase_011056_2);

#define VkglTestCase_011057_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_011057_2 "array.std140.row_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011057, VkglTestCase_011057_1, VkglTestCase_011057_2);

#define VkglTestCase_011058_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011058_2 "rray.std140.row_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011058, VkglTestCase_011058_1, VkglTestCase_011058_2);

#define VkglTestCase_011059_1 "dEQP-GLES31.functional.ubo.3_level"
#define VkglTestCase_011059_2 "_array.std140.row_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011059, VkglTestCase_011059_1, VkglTestCase_011059_2);

#define VkglTestCase_011060_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_011060_2 "ray.std140.column_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011060, VkglTestCase_011060_1, VkglTestCase_011060_2);

#define VkglTestCase_011061_1 "dEQP-GLES31.functional.ubo.3_level_arr"
#define VkglTestCase_011061_2 "ay.std140.column_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011061, VkglTestCase_011061_1, VkglTestCase_011061_2);

#define VkglTestCase_011062_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011062_2 "rray.std140.column_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011062, VkglTestCase_011062_1, VkglTestCase_011062_2);

#define VkglTestCase_011063_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_011063_2 "evel_array.std140.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011063, VkglTestCase_011063_1, VkglTestCase_011063_2);

#define VkglTestCase_011064_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_011064_2 "vel_array.std140.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011064, VkglTestCase_011064_1, VkglTestCase_011064_2);

#define VkglTestCase_011065_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_011065_2 "level_array.std140.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011065, VkglTestCase_011065_1, VkglTestCase_011065_2);

#define VkglTestCase_011066_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_011066_2 "array.std140.row_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011066, VkglTestCase_011066_1, VkglTestCase_011066_2);

#define VkglTestCase_011067_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011067_2 "rray.std140.row_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011067, VkglTestCase_011067_1, VkglTestCase_011067_2);

#define VkglTestCase_011068_1 "dEQP-GLES31.functional.ubo.3_level"
#define VkglTestCase_011068_2 "_array.std140.row_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011068, VkglTestCase_011068_1, VkglTestCase_011068_2);

#define VkglTestCase_011069_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_011069_2 "ray.std140.column_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011069, VkglTestCase_011069_1, VkglTestCase_011069_2);

#define VkglTestCase_011070_1 "dEQP-GLES31.functional.ubo.3_level_arr"
#define VkglTestCase_011070_2 "ay.std140.column_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011070, VkglTestCase_011070_1, VkglTestCase_011070_2);

#define VkglTestCase_011071_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011071_2 "rray.std140.column_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011071, VkglTestCase_011071_1, VkglTestCase_011071_2);

#define VkglTestCase_011072_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_011072_2 "evel_array.std140.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011072, VkglTestCase_011072_1, VkglTestCase_011072_2);

#define VkglTestCase_011073_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_011073_2 "vel_array.std140.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011073, VkglTestCase_011073_1, VkglTestCase_011073_2);

#define VkglTestCase_011074_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_011074_2 "level_array.std140.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011074, VkglTestCase_011074_1, VkglTestCase_011074_2);

#define VkglTestCase_011075_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_011075_2 "array.std140.row_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011075, VkglTestCase_011075_1, VkglTestCase_011075_2);

#define VkglTestCase_011076_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011076_2 "rray.std140.row_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011076, VkglTestCase_011076_1, VkglTestCase_011076_2);

#define VkglTestCase_011077_1 "dEQP-GLES31.functional.ubo.3_level"
#define VkglTestCase_011077_2 "_array.std140.row_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011077, VkglTestCase_011077_1, VkglTestCase_011077_2);

#define VkglTestCase_011078_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_011078_2 "ray.std140.column_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011078, VkglTestCase_011078_1, VkglTestCase_011078_2);

#define VkglTestCase_011079_1 "dEQP-GLES31.functional.ubo.3_level_arr"
#define VkglTestCase_011079_2 "ay.std140.column_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011079, VkglTestCase_011079_1, VkglTestCase_011079_2);

#define VkglTestCase_011080_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_011080_2 "rray.std140.column_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_011080, VkglTestCase_011080_1, VkglTestCase_011080_2);
