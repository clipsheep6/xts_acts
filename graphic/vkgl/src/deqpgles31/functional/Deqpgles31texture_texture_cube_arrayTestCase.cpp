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
#include "../ActsDeqpgles310016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015472_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015472_2 "exture.texture_cube_array.is_texture"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015472, VkglTestCase_015472_1, VkglTestCase_015472_2);

#define VkglTestCase_015473_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015473_2 "texture_cube_array.texture_swizzle_r_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015473, VkglTestCase_015473_1, VkglTestCase_015473_2);

#define VkglTestCase_015474_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015474_2 ".texture_cube_array.texture_swizzle_r_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015474, VkglTestCase_015474_1, VkglTestCase_015474_2);

#define VkglTestCase_015475_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015475_2 "exture_cube_array.texture_swizzle_r_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015475, VkglTestCase_015475_1, VkglTestCase_015475_2);

#define VkglTestCase_015476_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015476_2 "exture_cube_array.texture_swizzle_r_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015476, VkglTestCase_015476_1, VkglTestCase_015476_2);

#define VkglTestCase_015477_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015477_2 "texture_cube_array.texture_swizzle_g_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015477, VkglTestCase_015477_1, VkglTestCase_015477_2);

#define VkglTestCase_015478_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015478_2 ".texture_cube_array.texture_swizzle_g_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015478, VkglTestCase_015478_1, VkglTestCase_015478_2);

#define VkglTestCase_015479_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015479_2 "exture_cube_array.texture_swizzle_g_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015479, VkglTestCase_015479_1, VkglTestCase_015479_2);

#define VkglTestCase_015480_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015480_2 "exture_cube_array.texture_swizzle_g_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015480, VkglTestCase_015480_1, VkglTestCase_015480_2);

#define VkglTestCase_015481_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015481_2 "texture_cube_array.texture_swizzle_b_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015481, VkglTestCase_015481_1, VkglTestCase_015481_2);

#define VkglTestCase_015482_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015482_2 ".texture_cube_array.texture_swizzle_b_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015482, VkglTestCase_015482_1, VkglTestCase_015482_2);

#define VkglTestCase_015483_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015483_2 "exture_cube_array.texture_swizzle_b_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015483, VkglTestCase_015483_1, VkglTestCase_015483_2);

#define VkglTestCase_015484_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015484_2 "exture_cube_array.texture_swizzle_b_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015484, VkglTestCase_015484_1, VkglTestCase_015484_2);

#define VkglTestCase_015485_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015485_2 "texture_cube_array.texture_swizzle_a_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015485, VkglTestCase_015485_1, VkglTestCase_015485_2);

#define VkglTestCase_015486_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015486_2 ".texture_cube_array.texture_swizzle_a_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015486, VkglTestCase_015486_1, VkglTestCase_015486_2);

#define VkglTestCase_015487_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015487_2 "exture_cube_array.texture_swizzle_a_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015487, VkglTestCase_015487_1, VkglTestCase_015487_2);

#define VkglTestCase_015488_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015488_2 "exture_cube_array.texture_swizzle_a_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015488, VkglTestCase_015488_1, VkglTestCase_015488_2);

#define VkglTestCase_015489_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015489_2 ".texture_cube_array.texture_wrap_s_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015489, VkglTestCase_015489_1, VkglTestCase_015489_2);

#define VkglTestCase_015490_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015490_2 "e.texture_cube_array.texture_wrap_s_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015490, VkglTestCase_015490_1, VkglTestCase_015490_2);

#define VkglTestCase_015491_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015491_2 ".texture_cube_array.texture_wrap_s_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015491, VkglTestCase_015491_1, VkglTestCase_015491_2);

#define VkglTestCase_015492_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015492_2 "texture_cube_array.texture_wrap_s_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015492, VkglTestCase_015492_1, VkglTestCase_015492_2);

#define VkglTestCase_015493_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015493_2 ".texture_cube_array.texture_wrap_t_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015493, VkglTestCase_015493_1, VkglTestCase_015493_2);

#define VkglTestCase_015494_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015494_2 "e.texture_cube_array.texture_wrap_t_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015494, VkglTestCase_015494_1, VkglTestCase_015494_2);

#define VkglTestCase_015495_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015495_2 ".texture_cube_array.texture_wrap_t_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015495, VkglTestCase_015495_1, VkglTestCase_015495_2);

#define VkglTestCase_015496_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015496_2 "texture_cube_array.texture_wrap_t_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015496, VkglTestCase_015496_1, VkglTestCase_015496_2);

#define VkglTestCase_015497_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015497_2 "exture_cube_array.texture_mag_filter_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015497, VkglTestCase_015497_1, VkglTestCase_015497_2);

#define VkglTestCase_015498_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015498_2 "texture_cube_array.texture_mag_filter_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015498, VkglTestCase_015498_1, VkglTestCase_015498_2);

#define VkglTestCase_015499_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015499_2 "exture_cube_array.texture_mag_filter_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015499, VkglTestCase_015499_1, VkglTestCase_015499_2);

#define VkglTestCase_015500_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015500_2 "xture_cube_array.texture_mag_filter_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015500, VkglTestCase_015500_1, VkglTestCase_015500_2);

#define VkglTestCase_015501_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015501_2 "exture_cube_array.texture_min_filter_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015501, VkglTestCase_015501_1, VkglTestCase_015501_2);

#define VkglTestCase_015502_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015502_2 "texture_cube_array.texture_min_filter_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015502, VkglTestCase_015502_1, VkglTestCase_015502_2);

#define VkglTestCase_015503_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015503_2 "exture_cube_array.texture_min_filter_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015503, VkglTestCase_015503_1, VkglTestCase_015503_2);

#define VkglTestCase_015504_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015504_2 "xture_cube_array.texture_min_filter_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015504, VkglTestCase_015504_1, VkglTestCase_015504_2);

#define VkglTestCase_015505_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015505_2 ".texture_cube_array.texture_min_lod_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015505, VkglTestCase_015505_1, VkglTestCase_015505_2);

#define VkglTestCase_015506_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015506_2 "e.texture_cube_array.texture_min_lod_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015506, VkglTestCase_015506_1, VkglTestCase_015506_2);

#define VkglTestCase_015507_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015507_2 "texture_cube_array.texture_min_lod_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015507, VkglTestCase_015507_1, VkglTestCase_015507_2);

#define VkglTestCase_015508_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015508_2 "texture_cube_array.texture_min_lod_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015508, VkglTestCase_015508_1, VkglTestCase_015508_2);

#define VkglTestCase_015509_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015509_2 ".texture_cube_array.texture_max_lod_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015509, VkglTestCase_015509_1, VkglTestCase_015509_2);

#define VkglTestCase_015510_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015510_2 "e.texture_cube_array.texture_max_lod_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015510, VkglTestCase_015510_1, VkglTestCase_015510_2);

#define VkglTestCase_015511_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015511_2 "texture_cube_array.texture_max_lod_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015511, VkglTestCase_015511_1, VkglTestCase_015511_2);

#define VkglTestCase_015512_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015512_2 "texture_cube_array.texture_max_lod_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015512, VkglTestCase_015512_1, VkglTestCase_015512_2);

#define VkglTestCase_015513_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015513_2 "exture_cube_array.texture_base_level_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015513, VkglTestCase_015513_1, VkglTestCase_015513_2);

#define VkglTestCase_015514_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015514_2 "texture_cube_array.texture_base_level_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015514, VkglTestCase_015514_1, VkglTestCase_015514_2);

#define VkglTestCase_015515_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015515_2 "exture_cube_array.texture_base_level_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015515, VkglTestCase_015515_1, VkglTestCase_015515_2);

#define VkglTestCase_015516_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015516_2 "xture_cube_array.texture_base_level_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015516, VkglTestCase_015516_1, VkglTestCase_015516_2);

#define VkglTestCase_015517_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015517_2 "texture_cube_array.texture_max_level_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015517, VkglTestCase_015517_1, VkglTestCase_015517_2);

#define VkglTestCase_015518_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015518_2 ".texture_cube_array.texture_max_level_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015518, VkglTestCase_015518_1, VkglTestCase_015518_2);

#define VkglTestCase_015519_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015519_2 "exture_cube_array.texture_max_level_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015519, VkglTestCase_015519_1, VkglTestCase_015519_2);

#define VkglTestCase_015520_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015520_2 "exture_cube_array.texture_max_level_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015520, VkglTestCase_015520_1, VkglTestCase_015520_2);

#define VkglTestCase_015521_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015521_2 "xture_cube_array.texture_compare_mode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015521, VkglTestCase_015521_1, VkglTestCase_015521_2);

#define VkglTestCase_015522_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015522_2 "exture_cube_array.texture_compare_mode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015522, VkglTestCase_015522_1, VkglTestCase_015522_2);

#define VkglTestCase_015523_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015523_2 "xture_cube_array.texture_compare_mode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015523, VkglTestCase_015523_1, VkglTestCase_015523_2);

#define VkglTestCase_015524_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015524_2 "ture_cube_array.texture_compare_mode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015524, VkglTestCase_015524_1, VkglTestCase_015524_2);

#define VkglTestCase_015525_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015525_2 "xture_cube_array.texture_compare_func_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015525, VkglTestCase_015525_1, VkglTestCase_015525_2);

#define VkglTestCase_015526_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015526_2 "exture_cube_array.texture_compare_func_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015526, VkglTestCase_015526_1, VkglTestCase_015526_2);

#define VkglTestCase_015527_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015527_2 "xture_cube_array.texture_compare_func_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015527, VkglTestCase_015527_1, VkglTestCase_015527_2);

#define VkglTestCase_015528_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015528_2 "ture_cube_array.texture_compare_func_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015528, VkglTestCase_015528_1, VkglTestCase_015528_2);

#define VkglTestCase_015529_1 "dEQP-GLES31.functional.state_query.texture.text"
#define VkglTestCase_015529_2 "ure_cube_array.texture_immutable_levels_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015529, VkglTestCase_015529_1, VkglTestCase_015529_2);

#define VkglTestCase_015530_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015530_2 "ture_cube_array.texture_immutable_levels_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015530, VkglTestCase_015530_1, VkglTestCase_015530_2);

#define VkglTestCase_015531_1 "dEQP-GLES31.functional.state_query.texture.text"
#define VkglTestCase_015531_2 "ure_cube_array.texture_immutable_levels_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015531, VkglTestCase_015531_1, VkglTestCase_015531_2);

#define VkglTestCase_015532_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015532_2 "re_cube_array.texture_immutable_levels_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015532, VkglTestCase_015532_1, VkglTestCase_015532_2);

#define VkglTestCase_015533_1 "dEQP-GLES31.functional.state_query.texture.text"
#define VkglTestCase_015533_2 "ure_cube_array.texture_immutable_format_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015533, VkglTestCase_015533_1, VkglTestCase_015533_2);

#define VkglTestCase_015534_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015534_2 "ture_cube_array.texture_immutable_format_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015534, VkglTestCase_015534_1, VkglTestCase_015534_2);

#define VkglTestCase_015535_1 "dEQP-GLES31.functional.state_query.texture.text"
#define VkglTestCase_015535_2 "ure_cube_array.texture_immutable_format_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015535, VkglTestCase_015535_1, VkglTestCase_015535_2);

#define VkglTestCase_015536_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015536_2 "re_cube_array.texture_immutable_format_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015536, VkglTestCase_015536_1, VkglTestCase_015536_2);

#define VkglTestCase_015537_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015537_2 "exture_cube_array.depth_stencil_mode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015537, VkglTestCase_015537_1, VkglTestCase_015537_2);

#define VkglTestCase_015538_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015538_2 "texture_cube_array.depth_stencil_mode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015538, VkglTestCase_015538_1, VkglTestCase_015538_2);

#define VkglTestCase_015539_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015539_2 "exture_cube_array.depth_stencil_mode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015539, VkglTestCase_015539_1, VkglTestCase_015539_2);

#define VkglTestCase_015540_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015540_2 "xture_cube_array.depth_stencil_mode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015540, VkglTestCase_015540_1, VkglTestCase_015540_2);

#define VkglTestCase_015541_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015541_2 "exture_cube_array.texture_srgb_decode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015541, VkglTestCase_015541_1, VkglTestCase_015541_2);

#define VkglTestCase_015542_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015542_2 "texture_cube_array.texture_srgb_decode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015542, VkglTestCase_015542_1, VkglTestCase_015542_2);

#define VkglTestCase_015543_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015543_2 "xture_cube_array.texture_srgb_decode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015543, VkglTestCase_015543_1, VkglTestCase_015543_2);

#define VkglTestCase_015544_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015544_2 "xture_cube_array.texture_srgb_decode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015544, VkglTestCase_015544_1, VkglTestCase_015544_2);

#define VkglTestCase_015545_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015545_2 "xture_cube_array.texture_border_color_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015545, VkglTestCase_015545_1, VkglTestCase_015545_2);

#define VkglTestCase_015546_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015546_2 "exture_cube_array.texture_border_color_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015546, VkglTestCase_015546_1, VkglTestCase_015546_2);

#define VkglTestCase_015547_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015547_2 "xture_cube_array.texture_border_color_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015547, VkglTestCase_015547_1, VkglTestCase_015547_2);

#define VkglTestCase_015548_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015548_2 "ture_cube_array.texture_border_color_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015548, VkglTestCase_015548_1, VkglTestCase_015548_2);

#define VkglTestCase_015549_1 "dEQP-GLES31.functional.state_query.texture.texture"
#define VkglTestCase_015549_2 "_cube_array.texture_wrap_s_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015549, VkglTestCase_015549_1, VkglTestCase_015549_2);

#define VkglTestCase_015550_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015550_2 "e_cube_array.texture_wrap_s_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015550, VkglTestCase_015550_1, VkglTestCase_015550_2);

#define VkglTestCase_015551_1 "dEQP-GLES31.functional.state_query.texture.texture"
#define VkglTestCase_015551_2 "_cube_array.texture_wrap_t_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015551, VkglTestCase_015551_1, VkglTestCase_015551_2);

#define VkglTestCase_015552_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015552_2 "e_cube_array.texture_wrap_t_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015552, VkglTestCase_015552_1, VkglTestCase_015552_2);
